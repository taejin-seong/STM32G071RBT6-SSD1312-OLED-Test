/*
 * hw_def.h
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "bsp.h"

//TODO: 컴파일허용설정(2)

/* GPIO */
#define _USE_HW_GPIO
#define      HW_GPIO_MAX_CH     1

/* I2C */
#define _USE_HW_I2C

/* IMG */
#define _USE_HW_IMG
#define      SSD1312_IMG_GARFIELD_128x64
#define      SSD1312_IMG_SUNCLOUDRAIN_128x64

/* FONT */
#define _USE_HW_FONT
#define      SSD1312_FONT_12x16

/* SSD1312 */
#define _USE_HW_SSD1312
#define _USE_HW_DRAW


#endif /* SRC_HW_HW_DEF_H_ */
