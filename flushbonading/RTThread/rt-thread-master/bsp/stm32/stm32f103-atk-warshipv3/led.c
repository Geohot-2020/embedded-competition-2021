/*
* Copyright (c) 2006-2018, RT-Thread Development Team
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date           Author       Notes
* 2018-10-17     flybreak      the first version
*/

#include <rtdevice.h>

#include "led.h"

int led_init(void)
{
    /* �趨 LED ����Ϊ�������ģʽ */
    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    return 0;
}

int led_on(void)
{
    /* ���� API ����͵�ƽ */
    rt_pin_write(LED_PIN, PIN_LOW);

    return 0;
}

int led_off(void)
{
    /* ���� API ����ߵ�ƽ */
    rt_pin_write(LED_PIN, PIN_HIGH);

    return 0;
}

int led_toggle(void)
{
    /* ���� API ������ǰ��ƽ Ȼ������෴��ƽ */
    rt_pin_write(LED_PIN, !rt_pin_read(LED_PIN));

    return 0;
}