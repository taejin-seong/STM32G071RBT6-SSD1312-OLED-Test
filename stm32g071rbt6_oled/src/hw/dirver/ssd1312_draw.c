/*
 * draw.c
 *
 *  Created on: 2022. 12. 10.
 *      Author: user
 */


#include "ssd1312_draw.h"


extern uint8_t SSD1312_Buffer[SSD1312_BUFFER_SIZE];






/*
 *
 */

void ssd1312_DrawPixel(uint8_t page, uint8_t col, uint8_t DotState)
{

  if (DotState == SET)
  {
    SSD1312_Buffer[page + (col / 8) * SSD1312_WIDTH] |= 1 << (col % 8);
  }

  else if (DotState == CLEAR)
  {
    SSD1312_Buffer[page + (col / 8) * SSD1312_WIDTH] &= ~(1 << (col % 8));
  }

}




/*
 *
 */
void ssd1312_DrawFillPage(uint8_t ms)
{

  for (int i = 0; i < _DEF_COLUMN_NUM_MAX; i++)
  {
    for (int j = 0; j <_DEF_PAGE_NUM_MAX * 8; j++)
    {
      ssd1312_DrawPixel(i, j, SET);
      ssd1312_FlushBufferToScreen();
      delay_ms(ms);
    }
  }

}




/*
 *
 */
void ssd1312_DrawBitmap(uint8_t page, uint8_t col, const unsigned char* bitmap, uint8_t w, uint8_t h)
{
    int16_t byteWidth = (w + 7) / 8; // Bitmap scanline pad = whole byte
    uint8_t byte = 0;


    for (uint8_t j = 0; j < h; j++, col++)
    {
        for (uint8_t i = 0; i < w; i++)
        {
            if (i & 7)
            {
              byte <<= 1;

            }

            else
            {
              byte = (*(const unsigned char *)(&bitmap[j * byteWidth + i / 8]));
            }

            if (byte & 0x80)
            {
              ssd1312_DrawPixel(page + i, col, SET);
            }
        }
    }

    ssd1312_FlushBufferToScreen();
    return;
}




/*
 *
 */
void ssd1312_WriteChar(uint8_t chr, uint8_t page, uint16_t col)
{

  uint8_t char_buf[FONT_WIDTH*2]={};

  for(uint8_t i=0; i < FONT_WIDTH * 2; i++)
  {
    char_buf[i] = FONT_TABLE[(chr-32)*(FONT_WIDTH*2) + i];
  }

  for(uint8_t i=0; i < 2; i++)
  {
      ssd1312_SetAddr(page+i, col);
      ssd1312_WriteData(&char_buf[i*FONT_WIDTH], FONT_WIDTH);
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


