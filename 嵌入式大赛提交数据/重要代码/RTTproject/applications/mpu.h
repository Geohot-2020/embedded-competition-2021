/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-09-25     zhengyc       the first version
 */
#ifndef APPLICATIONS_MPU_H_
#define APPLICATIONS_MPU_H_

#include "sensor_inven_mpu6xxx.h"
#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#include "mnist_app.h"

#define MPU6050_I2C_BUS_NAME          "i2c3"      //i2c3总线
#define MPU6050_ADDR                  0x68        //MPU6050地址
struct mpu6xxx_device *i2c_bus;     //6050总线设备
struct mpu6xxx_3axes gyro1, accel1;     //数据结构体



void mpu_get_entry(void *parameter);

#endif /* APPLICATIONS_MPU_H_ */
