/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-02     RT-Thread    first version
 */
#include <stdio.h>
#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"
#include "sensor_inven_mpu6xxx.h"


#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define LED_PIN GET_PIN(I, 8)
#define MPU6050_I2C_BUS_NAME          "i2c3"      //i2c�����豸��
#define MPU6050_ADDR                  0x68        //MPU6050��ַ���ȶ���
struct mpu6xxx_device *i2c_bus;     //6050���ƾ��
struct mpu6xxx_3axes gyro1, accel1;     //�����ǣ����ٶȽṹ��

//解决上电瞎跑问题
rt_int16_t px,py,pz=0;

/////////////////////////////ai传入的数据集//////////////////////////////////////////////////////////////////////////////////////
//test|flex
//const float ai_data[2][6]={{0.3875,0.2525,0.26625,0.4489275,0.54274,0.43353},{0.37375,0.2525,0.26625,0.446395,0.4931175,0.45706}};
//test|punch
//const float ai_data[4][6]={{0.745,0.5775,0.6175,0.517395,0.5245975,0.513885},{0.73,0.585,0.60875,0.519485,0.5075225,0.51381},{0.69125,0.58875,0.60125,0.518295,0.494475,0.5101775},{0.65125,0.58875,0.59,0.5130625,0.4901875,0.5048375}};
float ai_data[30][6]={};
rt_uint32_t ai_count=0;
float gx,gy,gz,ax,ay,az=0;

int main(void)
{
    i2c_bus = (struct mpu6xxx_device *)mpu6xxx_init(MPU6050_I2C_BUS_NAME, MPU6050_ADDR);   //��ʼ��MPU6050��������λΪ���ٶȣ����ٶ�

    mpu6xxx_set_param(i2c_bus, MPU6XXX_ACCEL_RANGE, MPU6XXX_GYRO_RANGE_250DPS);  //�����Ƿ�Χ����
    mpu6xxx_set_param(i2c_bus, MPU6XXX_ACCEL_RANGE, MPU6XXX_ACCEL_RANGE_2G);     //���ٶȼ�
    mpu6xxx_set_param(i2c_bus, MPU6XXX_DLPF_CONFIG, MPU6XXX_DLPF_188HZ);        //��ͨ�˲�
    mpu6xxx_set_param(i2c_bus, MPU6XXX_SAMPLE_RATE, 500);                       //����Ƶ��

    rt_uint32_t count = 1;

    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    while(count++)
    {
        mpu6xxx_get_gyro(i2c_bus, &gyro1);
        mpu6xxx_get_accel(i2c_bus, &accel1);

        rt_pin_mode(LED_PIN, count % 2);
        /***************************************
                     * 解决mpu6050瞎跑问题
         ****************************************/
        if(10<=count&&count<20)
        {
            px+=accel1.x;
            py+=accel1.y;
            pz+=accel1.z;
        }
        accel1.x-=px/10;
        accel1.y-=py/10;
        accel1.z-=pz/10;
        if(count==20)
            LOG_D("-----------------------------init over-----------------------------");
        ///////////////////////////////////////////////////
//        LOG_D("px:%d\tpy:%d\tpz:%d",px/10,py/10,pz/10);
//        LOG_D("gyroX:%d\tgyroY:%d\tgyroZ:%d\t",gyro1.x,gyro1.y,gyro1.z);
//        LOG_D("accelX:%d\taccelY:%d\taccelZ:%d\t",accel1.x,accel1.y,accel1.z);

        /************************处理数据，变为[0,1]，便于机器学习*******************************************/
        gx=(gyro1.x+2500.0)/5000.0;
        gy=(gyro1.y+2500.0)/5000.0;
        gz=(gyro1.z+2500.0)/5000.0;
        ax=(accel1.x+1500.0)/3000.0;
        ay=(accel1.y+1500.0)/3000.0;
        az=(accel1.z+1500.0)/3000.0;

        /*************************打印浮点型数据，RTT未自带*********************************************/
        char float_str[80];
        sprintf(float_str,"gx:%f\tgy:%f\tgz:%f\tax:%f\tay:%f\taz:%f\t",gx,gy,gz,ax,ay,az);
        LOG_D(float_str);

        /*************************AI模型数据传入***************************************************************/
        ai_data[ai_count][0] = gx;
        ai_data[ai_count][1] = gy;
        ai_data[ai_count][3] = gz;
        ai_data[ai_count][4] = ax;
        ai_data[ai_count][5] = ay;
        ai_data[ai_count][6] = az;
        ai_count++;
        if(ai_count==29)
            ai_count=0;

        rt_thread_mdelay(500);
    }
    return RT_EOK;
}




#include "stm32h7xx.h"
static int vtor_config(void)
{
    /* Vector Table Relocation in Internal QSPI_FLASH */
    SCB->VTOR = QSPI_BASE;
    return 0;
}
INIT_BOARD_EXPORT(vtor_config);


