/*
 * ssd1312.c
 *
 *  Created on: 2022. 11. 2.
 *      Author: sungt
 */


#include "ssd1312.h"




/*
 *
 */
static void ssd1312_WriteCommand(uint8_t cmd)
{
  uint8_t buffer[2]={0};      //Control Byte + Command Byte
    buffer[0]=(0<<7)|(0<<6);    //Co=0 , D/C=0
    buffer[1]=cmd;

    HAL_I2C_Master_Transmit(&SSD1312_I2C_PORT, SSD1312_I2C_ADDR, (uint8_t*)buffer, 2, HAL_MAX_DELAY);
}




/*
 *
 */
static void ssd1312_WriteData(uint8_t * buffer, size_t buff_size)
{
  HAL_I2C_Mem_Write(&SSD1312_I2C_PORT, SSD1312_I2C_ADDR, 0x40, 1, buffer, buff_size, HAL_MAX_DELAY);
}



/*
 *
 */
void ssd1312_Init(void)
{
    delay_ms(200);


    ssd1312_WriteCommand(0xA8);    //Set Mux Ratio
    ssd1312_WriteCommand(0x3F);    //64MUX

    ssd1312_WriteCommand(0xD3);    //Set Display Offset
    ssd1312_WriteCommand(0x00);    //COM0

    ssd1312_WriteCommand(0x40);    //Set Display Start Line

    ssd1312_WriteCommand(0xA0);    //Set Segment re-map, Default 0xA0
                        //column address 127 is mapped to SEG0 (좌우 반전)

    ssd1312_WriteCommand(0xC8);    //Set COM Output Scan Direction, default 0xC0
                        //remapped mode. Scan from COM[N-1] to COM0 (상하 반전)

    ssd1312_WriteCommand(0xDA);    //Set COM Pins hardware configuration
    ssd1312_WriteCommand(0x12);

    ssd1312_WriteCommand(0x20);    //Set Memory Addressing Mode
    ssd1312_WriteCommand(0x02);    //Page Addressing Mode

    ssd1312_WriteCommand(0x81);    //Set Contrast Control
    ssd1312_WriteCommand(0x7F);    //1~256

    ssd1312_WriteCommand(0xA4);    //Disable Entire Display On

    ssd1312_WriteCommand(0xA6);    //Set Normal Display

    ssd1312_WriteCommand(0xD5);    //Set Osc Frequency
    ssd1312_WriteCommand(0x80);

    ssd1312_WriteCommand(0x8D);    //Enable charge pump regulator
    ssd1312_WriteCommand(0x14);

    ssd1312_WriteCommand(0xAF);    //Display ON
}




/*
 *
 */
void ssd1312_Clear(void)
{
    uint8_t buffer[128]={0};

    ssd1312_WriteCommand(0x00);
    ssd1312_WriteCommand(0x10);

    for(uint8_t i=0;i<8;i++)
    {
      ssd1312_WriteCommand(0xB0+i);
      ssd1312_WriteData(buffer,128);
    }
}



/*
 *
 *
 */
void ssd1312_SetCoord(uint8_t page, uint8_t col)
{
    uint8_t col_low=0x0F,col_high=0x1F;
    col_low=(col&0x0F);
    col_high=0x10|((col>>4)&0x0F);
    ssd1312_WriteCommand(0xB0+page);
    ssd1312_WriteCommand(col_low);
    ssd1312_WriteCommand(col_high);
}



/*
 *
 *
 */
void ssd1312_WriteChar(uint8_t character_Code, uint8_t page, uint16_t column)
{
    uint8_t char_Buffer[FONT_WIDTH*2]={0};

    for(uint8_t i=0;i<FONT_WIDTH*2;i++)
    {
        char_Buffer[i]=ssd1312_Fonts[(character_Code-32)*(FONT_WIDTH*2)+i];
    }

    for(uint8_t i=0;i<2;i++)
    {
      ssd1312_SetCoord(page+i,column);
      ssd1312_WriteData(&char_Buffer[i*FONT_WIDTH],FONT_WIDTH);
    }
}


/*
 *
 */
void ssd1312_WriteString(char *str, uint8_t page, uint8_t col)
{
    while(*str)
    {
        if((127<col+FONT_WIDTH))
        {
            if(page==6)
            {
                break;
            }
            page+=2;
            col=0;
        }
        ssd1312_WriteChar(*str,page,col);

        col+=FONT_WIDTH;
        str++;
    }
}