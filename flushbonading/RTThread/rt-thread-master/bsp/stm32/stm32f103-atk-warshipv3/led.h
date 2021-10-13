/*
* Copyright (c) 2006-2018, RT-Thread Development Team
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date           Author       Notes
* 2018-10-17     flybreak      the first version
*/

#ifndef LED_H
#define LED_H

#define LED_PIN     21

int led_init(void);                     //LED µÆ³õÊ¼»¯
int led_on(void);                       //LED µÆÁÁ
int led_off(void);                      //LED µÆÃð
int led_toggle(void);                   //LED µÆÁÁÃð×´Ì¬·­×ª

#endif