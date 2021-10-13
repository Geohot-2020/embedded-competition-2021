/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-06-27     RT-Thread    first version
 */

#include <rtthread.h>
#include <board.h>
#include <rtdevice.h>
#include <drv_soft_i2c.h>
#include <arpa/inet.h>         /* 包含 ip_addr_t 等地址相关的头文件 */
#include <netdev.h>            /* 包含全部的 netdev 相关操作接口函数 */
#include <ntp.h>

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define LED0_PIN GET_PIN(B, 5)

extern int sht30_collect(void);

int main(void)
{
    /***********************************检查网络***************************************/
    //获取网卡对象
    struct netdev* net = netdev_get_by_name("esp0");

    //阻塞判断当前网络是否正常连接
    while(netdev_is_internet_up(net) != 1)
    {
       rt_thread_mdelay(200);
    }
    //提示当前网络已就绪
    rt_kprintf("network is ok!\n");

    /***********************************NTP对时***************************************/
    //NTP自动对时
    time_t cur_time;
    cur_time = ntp_sync_to_rtc(NULL);
    if (cur_time)
    {
        rt_kprintf("Cur Time: %s", ctime((const time_t*) &cur_time));
    }
    else
    {
        rt_kprintf("NTP sync fail.\n");
    }

    int count = 1;
    /*set LED0 pin mode to output*/
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
    sht30_collect();
    while (count++)
    {
        rt_pin_write(LED0_PIN, count % 2);
//        LOG_D("Hello RT-Thread!");
        rt_thread_mdelay(1000);
    }

    return RT_EOK;
}

int register_i2c(void)
{
    rt_hw_i2c_init("i2c1", GET_PIN(B,6), GET_PIN(B,7));

    return RT_EOK;
}
//注册到系统中，自动初始化设备
INIT_BOARD_EXPORT(register_i2c);
