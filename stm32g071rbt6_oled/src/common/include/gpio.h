/*
 * gpio.h
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */

#ifndef SRC_COMMON_INCLUDE_GPIO_H_
#define SRC_COMMON_INCLUDE_GPIO_H_

#include "hw_def.h"


#ifdef _USE_HW_GPIO


#define GPIO_MAX_CH     HW_GPIO_MAX_CH


bool gpio_Init(void);
bool gpio_PinMode(uint8_t ch, uint8_t mode);
void gpio_PinWrite(uint8_t ch, bool value);
bool gpio_PinRead(uint8_t ch);
void gpio_PinToggle(uint8_t ch);


#endif /* _USE_HW_GPIO */
#endif /* SRC_COMMON_INCLUDE_GPIO_H_ */
