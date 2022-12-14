/*
 * bsp.h
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "def.h"

#include "stm32g0xx_hal.h"
#include "stm32g0xx_hal_conf.h"

void bspInit(void);

void delay_ms(uint32_t ms);
void delay_us(uint32_t us);
uint32_t millis(void);

void Error_Handler(void);

#endif /* SRC_BSP_BSP_H_ */
