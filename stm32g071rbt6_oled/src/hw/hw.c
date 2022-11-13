/*
 * hw.c
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */


#include "hw.h"





void hwInit(void)
{
  bspInit();

  //TODO: HW초기화설정(3)
  MX_I2C1_Init();
  gpio_Init();
  ssd1312_Init();


}
