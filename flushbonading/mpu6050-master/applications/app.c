/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-11-06     11645       the first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <drv_common.h>
#include "mpu6xxx.h"
#include "mpu6xxx_reg.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
/* Default configuration, please change according to the actual situation, support i2c and spi device name */
#define MPU6XXX_DEVICE_NAME "i2c2"

#define SAMPLE_UART_NAME "uart4"
#define KEY_PIN GET_PIN(H, 4)
static rt_device_t serial;
char buffer[256];

const float accelerationThreshold = 2500; // threshold of significant in G's
const int numSamples = 119;

int samplesRead = 119;
struct hand_data
{
    struct mpu6xxx_3axes accel;
    struct mpu6xxx_3axes gyro;
};
struct hand_user
{
    struct mpu6xxx_device *dev[6];
    struct hand_data data[5];
};
void app()
{
    char str[] = "\r\n app start !!\r\n";
    static rt_uint8_t frame[2] = {0xaa, 0xbb};
    serial = rt_device_find("uart4");
    if (!serial)
    {
        rt_kprintf("find %s failed!\n", "uart4");
        return;
    }
    rt_device_open(serial, RT_DEVICE_FLAG_INT_TX);
    rt_device_write(serial, 0, str, (sizeof(str) - 1));
    rt_pin_mode(KEY_PIN, PIN_MODE_INPUT);

    struct hand_user hand;
    rt_size_t i;
    hand.dev[5] = mpu6xxx_init("i2c3", MPU6XXX_ADDRESS_AD0_HIGH);
    hand.dev[4] = mpu6xxx_init("i2c1", MPU6XXX_ADDRESS_AD0_LOW);
    hand.dev[3] = mpu6xxx_init("i2c1", MPU6XXX_ADDRESS_AD0_HIGH);
    hand.dev[2] = mpu6xxx_init("i2c2", MPU6XXX_ADDRESS_AD0_LOW);
    hand.dev[1] = mpu6xxx_init("i2c2", MPU6XXX_ADDRESS_AD0_HIGH);
    hand.dev[0] = mpu6xxx_init("i2c3", MPU6XXX_ADDRESS_AD0_LOW);
    for (i = 0; i < 6; i++)
    {
        if (hand.dev[i] == RT_NULL)
        {
            sprintf(buffer, "mpu6xxx init failed  %d\r\n", i);
            rt_device_open(serial, RT_DEVICE_FLAG_INT_TX);
            rt_device_write(serial, 0, buffer, (sizeof(buffer) - 1));
            rt_device_close(serial);
            return;
        }
    }
    while (1)
    {
        while (samplesRead == numSamples)
        {

            mpu6xxx_get_gyro(hand.dev[5], &hand.data[5].gyro);
            rt_int32_t aSum = fabs(hand.data[5].gyro.x) + fabs(hand.data[5].gyro.y) + fabs(hand.data[5].gyro.z);

            if (aSum >= 140)
            {
                // reset the sample read count
                samplesRead = 0;
                break;
            }
        }
        while (samplesRead < numSamples)
         while (1)
        {
            rt_device_write(serial, 0, frame, 2);
            //samplesRead++;
            for (i = 0; i < 6; i++)
            {
                struct mpu6xxx_3axes accel;
                mpu6xxx_get_accel(hand.dev[i], &accel);
                rt_device_write(serial, 0, &accel.x, 2 * 1);
                rt_device_write(serial, 0, &accel.y, 2 * 1);
                rt_device_write(serial, 0, &accel.z, 2 * 1);
            }
            mpu6xxx_get_gyro(hand.dev[5], &hand.data[5].gyro);
            /*
            for (i = 0; i < 6; i++)
                rt_device_write(serial, 0, &hand.data[i].accel, 6 * 1);
            rt_device_write(serial, 0, &hand.data[5].gyro, 6 * 1);*/
            //rt_thread_mdelay(3);
        }

        while (rt_pin_read(KEY_PIN))
        {
            rt_thread_mdelay(1);
        }
        while (!rt_pin_read(KEY_PIN))
        {
            rt_thread_mdelay(1);
        }
        rt_thread_mdelay(100);
    }
}
