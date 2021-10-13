/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-09-25     zhengyc       the first version
 */
#include "mpu.h"
float gx,gy,gz,ax,ay,az=0;              //原始数据
rt_int16_t px,py,pz=0;  //解决上电漂移问题
rt_int16_t accelerationThreshold = 30; //阈值为300，若三轴加速度之和>300，则判断动作发生
rt_int32_t mpuCount = 0;
rt_int8_t ai_count = 0;
float ai_data[70][6]={};

void mpu_get_entry(void *parameter)
{
    i2c_bus = (struct mpu6xxx_device *)mpu6xxx_init(MPU6050_I2C_BUS_NAME, MPU6050_ADDR);
    mpu6xxx_set_param(i2c_bus, MPU6XXX_ACCEL_RANGE, MPU6XXX_GYRO_RANGE_250DPS);
    mpu6xxx_set_param(i2c_bus, MPU6XXX_ACCEL_RANGE, MPU6XXX_ACCEL_RANGE_2G);
    mpu6xxx_set_param(i2c_bus, MPU6XXX_DLPF_CONFIG, MPU6XXX_DLPF_188HZ);
    mpu6xxx_set_param(i2c_bus, MPU6XXX_SAMPLE_RATE, 500);

    while(1){
        /* 获取数据 */
        mpu6xxx_get_gyro(i2c_bus, &gyro1);
        mpu6xxx_get_accel(i2c_bus, &accel1);
//        LOG_D("gyroX:%d\tgyroY:%d\tgyroZ:%d\t",gyro1.x,gyro1.y,gyro1.z);
//        LOG_D("accelX:%d\taccelY:%d\taccelZ:%d\t",accel1.x,accel1.y,accel1.z);
        /***************************************
                     * 解决mpu6050瞎跑问题
         ****************************************/
                if(10<=mpuCount&&mpuCount<20)
                {
                    px+=accel1.x;
                    py+=accel1.y;
                    pz+=accel1.z;
                }
                accel1.x-=px/10;
                accel1.y-=py/10;
                accel1.z-=pz/10;

                if(mpuCount==20)   LOG_D("-----------------------------init over-----------------------------");

                if(mpuCount>=20)
                {
                    ///////////////////////////////////////////////////
//                    LOG_D("px:%d\tpy:%d\tpz:%d",px/10,py/10,pz/10);
//                    LOG_D("gyroX:%d\tgyroY:%d\tgyroZ:%d\t",gyro1.x,gyro1.y,gyro1.z);
//                    LOG_D("accelX:%d\taccelY:%d\taccelZ:%d\t",accel1.x,accel1.y,accel1.z);
//                    LOG_D("%d,%d,%d,%d,%d,%d",gyro1.x,gyro1.y,gyro1.z,accel1.x,accel1.y,accel1.z);
                    //判断阈值或已经进入数据采集模式
                    if((accel1.x+accel1.y+accel1.z) >= 10*accelerationThreshold || ai_count!=0)
                    {
                        if(ai_count==1)
//                            LOG_D("start");
                        /************************处理数据，变为[0,1]，便于机器学习*******************************************/
                        gx=(gyro1.x+2000.0)/4000.0;
                        gy=(gyro1.y+2000.0)/4000.0;
                        gz=(gyro1.z+2000.0)/4000.0;
                        ax=(accel1.x+2000.0)/4000.0;
                        ay=(accel1.y+2000.0)/4000.0;
                        az=(accel1.z+2000.0)/4000.0;

                        /*************************打印浮点型数据，RTT未自带*********************************************/
        //                char float_str[80];
        //                sprintf(float_str,"gx:%f\tgy:%f\tgz:%f\tax:%f\tay:%f\taz:%f\t",gx,gy,gz,ax,ay,az);
        //                LOG_D(float_str);
                        ai_data[ai_count][0] = gx;
                        ai_data[ai_count][1] = gy;
                        ai_data[ai_count][2] = gz;
                        ai_data[ai_count][3] = ax;
                        ai_data[ai_count][4] = ay;
                        ai_data[ai_count][5] = az;
                        ai_count++;
                        /***********************AI数据足以推理一次，并上报数据************************************************/
                        if(ai_count==72)
                        {

                            //ai推理
                            mnist_app();
                            ai_count=0;
                            rt_thread_mdelay(5000);
                        }

                    }
                }
                mpuCount++;
    }
}
