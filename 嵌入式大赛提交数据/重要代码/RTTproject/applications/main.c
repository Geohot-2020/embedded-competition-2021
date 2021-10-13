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
#include "onenet.h"
#include "task.h"
#include "mpu.h"
#include "mnist_app.h"

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define LED_PIN GET_PIN(I, 8)

extern void wlan_autoconnect_init(void);

extern int pred_num;

int main(void)
{
    /* init Wi-Fi auto connect feature */
    wlan_autoconnect_init();
    /* enable auto reconnect on WLAN device */
    rt_wlan_config_autoreconnect(RT_TRUE);
    rt_thread_mdelay(3000);         //-----------等待wifi连接
    while(onenet_mqtt_init());
    rt_thread_mdelay(10000);         //-----------等待ONENET连接

    rt_thread_t mpu_thread, mnist_thread, oneet_thread, serial_thread;            /* 定义线程 */
    /* mpu获取数据线程 */
    mpu_thread = rt_thread_create("mpuRead", mpu_get_entry, RT_NULL, 1024*8, 10, 5);
    if(mpu_thread != RT_NULL)
        rt_thread_startup(mpu_thread);
    /* ai推理线程 */
//    mnist_thread = rt_thread_create("aiInvoke", ai_run_entry, RT_NULL, 1024, 2, 5);
//    if(mnist_thread != RT_NULL)
//        rt_thread_startup(mnist_thread);
//    /* 串口发送线程 */
//    serial_thread = rt_thread_create("serialSend", serial_send_entry, RT_NULL, 512*16, 9, 5);
//    if(serial_thread != RT_NULL)
//        rt_thread_startup(serial_thread);



    rt_uint32_t count = 1;
    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);



    while(count++)
    {
        rt_pin_mode(LED_PIN, count % 2);

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


