#ifndef GSM_PORT_H
#define GSM_PORT_H

#include "gsm_app.h"

void gsm_dma_init(void);
void gsm_uart_init(void);
void gsm_port_comm_start(void);
void gsm_port_gpio_start(void);
uint32_t gsm_get_rx_pos(void);
void gsm_port_init(void);
void gsm_start(void);

/**
 * @brief EC25 모듈 전원 OFF
 *
 * PWRKEY 핀을 이용한 전원 OFF 수행 (700ms pulse)
 */
void gsm_port_power_off(void);

/**
 * @brief EC25 모듈 전원 ON
 *
 * PWRKEY 핀을 이용한 전원 ON 수행 (1000ms pulse)
 * RDY URC 수신 후 자동으로 LTE 초기화 진행됨
 *
 * @return int 0: 성공
 */
int gsm_port_power_on(void);

/**
 * @brief EC25 모듈 하드웨어 리셋 (HAL ops 콜백)
 *
 * RST 핀을 이용한 하드웨어 리셋 수행
 * 리셋 후 모듈 부팅 완료까지 대기
 *
 * @return int 0: 성공
 */
int gsm_port_reset(void);

#endif
