/*
 * ssd1312.h
 *
 *  Created on: 2022. 11. 2.
 *      Author: sungt
 */

#ifndef SRC_COMMON_INCLUDE_SSD1312_H_
#define SRC_COMMON_INCLUDE_SSD1312_H_

#include "hw_def.h"
#include "i2c.h"
#include "font.h"


#ifdef _USE_HW_SSD1312

#define SSD1312_I2C_PORT        hi2c1
#define SSD1312_I2C_ADDR        (0x3C << 1)

/*
 *
 *
 */
#define FONT_WIDTH              12




void ssd1312_Init(void);
void ssd1312_Clear(void);
void ssd1312_SetCoord(uint8_t page, uint8_t col);
void ssd1312_WriteChar(uint8_t character_Code, uint8_t page, uint16_t column);
void ssd1312_WriteString(char *str, uint8_t page, uint8_t col);



#endif /* _USE_HW_SSD1312 */

#endif /* SRC_COMMON_INCLUDE_SSD1312_H_ */
