/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-09-23     zhengyc       the first version
 */
#ifndef APPLICATIONS_TASK_H_
#define APPLICATIONS_TASK_H_

#include <rtthread.h>
#include "rtconfig.h"
#include <rtdevice.h>
#include "drv_common.h"
#include "string.h"

//int thread_serial(void);
void serial_send_entry(void *parameter);
extern int pred_num;

#endif /* APPLICATIONS_TASK_H_ */
