/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-09-23     zhengyc       the first version
 */

/*Includes**********************************************************************/
#include "task.h"


#define THREAD_PRIORITY         3
#define THREAD_STACK_SIZE       512
#define THREAD_TIMESLICE        5

static rt_thread_t tid1 = RT_NULL;

#define SAMPLE_UART_NAME       "uart1"    /* 串口设备名称 */
static rt_device_t serial;                /* 串口设备句柄 */
struct serial_configure config = RT_SERIAL_CONFIG_DEFAULT;  /* 初始化配置参数 */

/* 线程 的入口函数 */
void serial_send_entry(void *parameter)
{
//    rt_uint32_t count = 1;
//    char str[2] = "";

//    int str = pred_num;


//        char str[] = "";
//        str[0] = pred_num - '0';
        /* step1：查找串口设备 */
        serial = rt_device_find(SAMPLE_UART_NAME);
        /* step2：修改串口配置参数 */
        config.baud_rate = BAUD_RATE_115200;        //修改波特率为 115200
        config.data_bits = DATA_BITS_8;           //数据位 8
        config.stop_bits = STOP_BITS_1;           //停止位 1
        config.bufsz     = 512;                   //修改缓冲区 buff size 为 512
        config.parity    = PARITY_NONE;           //无奇偶校验位

        /* step3：控制串口设备。通过控制接口传入命令控制字，与控制参数 */
        rt_device_control(serial, RT_DEVICE_CTRL_CONFIG, &config);

        /* step4：打开串口设备。以中断接收及轮询发送模式打开串口设备 */
        rt_device_open(serial, RT_DEVICE_FLAG_INT_RX);
//        while (count++)
//         {
//            if(count == 5000)
//            {
//                count = 1;
//            }
//            rt_thread_mdelay(2000);
//            /* 发送字符串 */
        char str[] = "hello RT-Thread!666\r\n";
        while(1)
            rt_device_write(serial, 0, str, (sizeof(str) - 1));
        /* step5: 关闭串口设备 */
        rt_device_close(serial);
//             if(pred_num==0)
//                 str[0] = '0';
//             else
//                 str[0] = '1';
//            rt_device_write(serial, 0, str, (sizeof(str)-1));
//        }
//        }

}

/* 线程 */
int thread_serial(void)
{
    /* 创建线程 ，名称是 thread，入口是 thread_entry*/
    tid1 = rt_thread_create("thread",
                            serial_send_entry, RT_NULL,
                            THREAD_STACK_SIZE,
                            THREAD_PRIORITY, THREAD_TIMESLICE);

    /* 如果获得线程控制块，启动这个线程 */
    if (tid1 != RT_NULL)
        rt_thread_startup(tid1);


    return 0;
}

/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(thread_serial, thread serial);
