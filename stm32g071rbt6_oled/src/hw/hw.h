/*
 * hw.h
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#include "hw_def.h"


//TODO: 모듈헤더설정 (1)
#include "gpio.h"
#include "i2c.h"
#include "ssd1312_font.h"
#include "ssd1312_img.h"
#include "ssd1312_command.h"
#include "ssd1312_draw.h"




void hwInit(void);


#endif /* SRC_HW_HW_H_ */
