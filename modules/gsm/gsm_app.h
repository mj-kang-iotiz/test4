#ifndef GSM_APP_H
#define GSM_APP_H

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

extern QueueHandle_t gsm_queue;

void gsm_task_create(void *arg);
void gsm_socket_monitor_start(void);

/**
 * @brief Rover 모드에서 LTE 시작
 *
 * GSM 태스크가 없으면 생성하고, EC25 모듈 전원을 켬
 * RDY URC 수신 후 자동으로 LTE 초기화 및 NTRIP 연결
 */
void gsm_start_rover(void);

#endif
