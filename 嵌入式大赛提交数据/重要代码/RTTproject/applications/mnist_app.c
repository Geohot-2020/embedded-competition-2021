/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-09-11     zhengyc    first version
 */

#include "mnist_app.h"

#define THREAD_PRIORITY         5
#define THREAD_STACK_SIZE       2048
#define THREAD_TIMESLICE        5

static rt_thread_t tid1 = RT_NULL;

//传入的数据集
extern const float ai_data[70][6];
static rt_ai_t model = NULL;
int pred_num = 0;

char *mnist_label[] = {"punch", "flex"};

void ai_run_complete(void *arg){
    *(int*)arg = 1;
}

/* ai线程 的入口函数 */
void ai_run_entry(void *parameter)
{
    rt_err_t result = RT_EOK;
    int ai_run_complete_flag = 0;
    rt_ai_buffer_t *work_buffer = rt_malloc(RT_AI_NETWORK_WORK_BUFFER_BYTES +
                                            RT_AI_NETWORK_IN_TOTAL_SIZE_BYTES +
                                            RT_AI_NETWORK_OUT_TOTAL_SIZE_BYTES);

    // find a registered model handle
    model = rt_ai_find(RT_AI_NETWORK_MODEL_NAME);
    if(!model) {
        rt_kprintf("ai model find err\r\n");
        return -1;
    }

    // init the model and allocate memory
    result = rt_ai_init(model, work_buffer);
    if (result != 0) {
        rt_kprintf("ai init err\r\n");
        return -1;
    }

    // prepare input data
    rt_memcpy(model->input[0], ai_data, RT_AI_NETWORK_IN_1_SIZE_BYTES);
    result = rt_ai_run(model , ai_run_complete, &ai_run_complete_flag);
    if (result != 0) {
        rt_kprintf("ai model run err\r\n");
        return -1;
    }

    // get output and post-process the output

    if(ai_run_complete_flag){
        float *out = (float *)rt_ai_output(model, 0);

        char ai_str[80];
        //显示传入的ai数据
        for(int i=0; i<70;i++)
        {
            sprintf(ai_str,"aidata: [%f,%f,%f,%f,%f,%f]\r\n",ai_data[i][1],ai_data[i][2],ai_data[i][3],ai_data[i][4],ai_data[i][5],ai_data[i][6]);
//            rt_kprintf(ai_str);
        }
//        /*************************打印*********************************/
        char float_str[80];
        sprintf(float_str,"punch:%f, flex:%f\t",out[0],out[1]);
//        AI_LOG(out[0]);
//        rt_kprintf(float_str);
//
//        /***************模型预测************************/
//        for(int i = 1 ; i < 2 ; i++){
//            if(out[i] > out[pred_num]){
//                pred_num = i;
//            }
        /* pred_num=1->punch->小车后退 */
        if(out[0]>out[1])
            pred_num = 2;
        else
            pred_num = 1;
//        AI_LOG("The prediction is : %s\n", mnist_label[pred_num]);


        rt_kprintf("%d",pred_num);

        onenet_http_upload_digit("zhengyc", pred_num);
    }

    rt_free(work_buffer);
    return 0;
}

/* 线程 */
int mnist_app(void)
{
    /* 创建线程 ，名称是 mnist，入口是 thread_entry*/
    tid1 = rt_thread_create("thread",
                            ai_run_entry, RT_NULL,
                            THREAD_STACK_SIZE,
                            THREAD_PRIORITY, THREAD_TIMESLICE);

    /* 如果获得线程控制块，启动这个线程 */
    if (tid1 != RT_NULL)
        rt_thread_startup(tid1);


    return 0;
}

//MSH_CMD_EXPORT(mnist_app, mnist demo);
