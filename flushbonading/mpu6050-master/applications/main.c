/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-02     RT-Thread    first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"

#define LED_PIN GET_PIN(I, 8)

extern void wlan_autoconnect_init(void);
extern void app();
void led_thread()
{
    rt_uint32_t count = 1;
    while (count++)
    {
        rt_thread_mdelay(500);
        rt_pin_write(LED_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED_PIN, PIN_LOW);
    }
}
int main(void)
{

    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    /* init Wi-Fi auto connect feature */
    wlan_autoconnect_init();
    /* enable auto reconnect on WLAN device */
    rt_wlan_config_autoreconnect(RT_TRUE);

    rt_thread_t thread = rt_thread_create("led", led_thread, RT_NULL, 1024, 25, 10);
    if (thread != RT_NULL)
    {
        rt_thread_startup(thread);
    }
    else
    {
        return RT_ERROR;
    }
    app();
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

/*
#include "sensor_inven_mpu6xxx.h"

int rt_hw_mpu6xxx_port(void)
{
    struct rt_sensor_config cfg;
    int ret;
    cfg.intf.dev_name = "i2c3";
    cfg.intf.user_data = (void *)MPU6XXX_ADDRESS_AD0_LOW;
    cfg.irq_pin.pin = RT_PIN_NONE;
    ret=rt_hw_mpu6xxx_init("u1", &cfg);
    rt_kprintf("%d 1\r\n",ret);

    cfg.intf.dev_name = "i2c1";
    cfg.intf.user_data = (void *)MPU6XXX_ADDRESS_AD0_HIGH;
    cfg.irq_pin.pin = RT_PIN_NONE;
    ret=rt_hw_mpu6xxx_init("u2", &cfg);
    rt_kprintf("%d 2\r\n",ret);

    cfg.intf.dev_name = "i2c1";
    cfg.intf.user_data = (void *)MPU6XXX_ADDRESS_AD0_LOW;
    cfg.irq_pin.pin = RT_PIN_NONE;
    ret=rt_hw_mpu6xxx_init("u3", &cfg);
    rt_kprintf("%d 3\r\n",ret);

    cfg.intf.dev_name = "i2c2";
    cfg.intf.user_data = (void *)MPU6XXX_ADDRESS_AD0_LOW;
    cfg.irq_pin.pin = RT_PIN_NONE;
    ret=rt_hw_mpu6xxx_init("u4", &cfg);
    rt_kprintf("%d 4\r\n",ret);

    cfg.intf.dev_name = "i2c2";
    cfg.intf.user_data = (void *)MPU6XXX_ADDRESS_AD0_HIGH;
    cfg.irq_pin.pin = RT_PIN_NONE;
    ret=rt_hw_mpu6xxx_init("u5", &cfg);
    rt_kprintf("%d 5\r\n",ret);

    return 0;
}
INIT_APP_EXPORT(rt_hw_mpu6xxx_port);

*/