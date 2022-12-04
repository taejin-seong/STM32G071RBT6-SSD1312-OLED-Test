/*
 * ap.c
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */


#include "ap.h"




void apInit(void)
{
  gpio_PinMode(_DEF_LED1, _DEF_OUTPUT_PULLUP);
}


void apMain(void)
{
  ssd1312_Clear();

  while(1)
  {
    //GPIO Test..
/*
    gpio_PinToggle(_DEF_LED1);
    delay_ms(1000);
*/

/*
    gpio_PinWrite(_DEF_LED1, _DEF_HIHG);
    delay_ms(100);
    gpio_PinWrite(_DEF_LED1, _DEF_LOW);
    delay_ms(100);

*/

/* TODO: OLED ap TEST .. */

   //ssd1312_DisplayON();

   ssd1312_WriteString("Hello,",0,0);
   ssd1312_WriteString("World!",2,0);
   ssd1312_SetContrast(0x10);
   delay_ms(100);
   ssd1312_SetContrast(0xFF);
   delay_ms(100);


  // ssd1312_DisplayOFF();
  // delay_ms(100);

  }
}


