#ifndef GSM_APP_H
#define GSM_APP_H

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "gsm.h"

extern QueueHandle_t gsm_queue;
extern gsm_t gsm_handle;

void gsm_task_create(void *arg);
void gsm_socket_monitor_start(void);

#endif
