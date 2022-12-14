/*
 * gpio.c
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */


#include "gpio.h"




typedef struct
{

    GPIO_TypeDef    *port;
    uint32_t         pin;
    uint8_t          mode;
    GPIO_PinState    on_state;
    GPIO_PinState    off_state;
    bool             init_value;

}gpio_tbl_t;


gpio_tbl_t gpio_tbl[GPIO_MAX_CH] =
        {
            {GPIOA, GPIO_PIN_5, _DEF_INPUT_PULLUP, GPIO_PIN_RESET, GPIO_PIN_SET,   true},       // 0. USER LED

        };




bool gpio_Init(void)
{
    bool ret = true;



    for(int i = 0; i < GPIO_MAX_CH; i++)
    {
        gpio_PinMode(i, gpio_tbl[i].mode);
        gpio_PinWrite(i, gpio_tbl[i].init_value);
    }


    return ret;
}


bool gpio_PinMode(uint8_t ch, uint8_t mode)
{
    bool ret = true;

    GPIO_InitTypeDef GPIO_InitStruct = {0};

    switch(mode)
    {
        case _DEF_INPUT:
            GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
            GPIO_InitStruct.Pull = GPIO_NOPULL;
            break;

        case _DEF_INPUT_PULLUP:
            GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
            GPIO_InitStruct.Pull = GPIO_PULLUP;
            break;

        case _DEF_INPUT_PULLDOWN:
            GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
            GPIO_InitStruct.Pull = GPIO_PULLDOWN;
            break;

        case _DEF_OUTPUT:
            GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; /* PUSH-PULL 출력 구조 */
            GPIO_InitStruct.Pull = GPIO_NOPULL;
            break;

        case _DEF_OUTPUT_PULLUP:
            GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; /* PUSH-PULL 출력 구조 */
            GPIO_InitStruct.Pull = GPIO_PULLUP;
            break;

        case _DEF_OUTPUT_PULLDWON:
            GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; /* PUSH-PULL 출력 구조 */
            GPIO_InitStruct.Pull = GPIO_PULLDOWN;
            break;
      }


    GPIO_InitStruct.Pin = gpio_tbl[ch].pin;
    HAL_GPIO_Init(gpio_tbl[ch].port, &GPIO_InitStruct);


    return ret;
}


void gpio_PinWrite(uint8_t ch, bool value)
{
    if( ch >= GPIO_MAX_CH)
    {
        return ;
    }

    if (value == true)
    {
          HAL_GPIO_WritePin(gpio_tbl[ch].port, gpio_tbl[ch].pin, gpio_tbl[ch].on_state);
    }
    else
    {
          HAL_GPIO_WritePin(gpio_tbl[ch].port, gpio_tbl[ch].pin, gpio_tbl[ch].off_state);
    }

}


bool gpio_PinRead(uint8_t ch)
{

    bool ret = false;

    if( ch >= GPIO_MAX_CH)
    {
        return false;
    }

    if (HAL_GPIO_ReadPin(gpio_tbl[ch].port, gpio_tbl[ch].pin) == gpio_tbl[ch].on_state)
    {
        ret = true;
    }

    return ret;
}

void gpio_PinToggle(uint8_t ch)
{
    if( ch >= GPIO_MAX_CH)
    {
        return;
    }

    HAL_GPIO_TogglePin(gpio_tbl[ch].port, gpio_tbl[ch].pin);

}
