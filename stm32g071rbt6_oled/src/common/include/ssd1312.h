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






// 221204 STJ
/* SSD1312 Command Table */

/* Set Lower Column Start Address for Page Addressing Mode */
#define CONTROL_LOWER_COLUMN_START_ADDRESS(ADDR)   ((0x00)|=ADDR) /* ADDR = 0x00~0x0F*/

/* Set Lower Column Start Address for Page Addressing Mode */
#define CONTROL_HIGHER_COLUMN_START_ADDRESS(ADDR)  ((0x10)|=ADDR) /* ADDR = 0x00~0x07 */

/* Set Memory Addressing Mode */
#define CONTROL_MEMORY_ADDRESSING_MODE              (0x20)
#define     DATA_COM_PAGE_H_MODE                             (0x01)
#define     DATA_PAGE_ADDRESSING_MODE                        (0x02)
#define     DATA_SEG_PAGE_H_MODE                             (0x09)

/* Set Line Address */
/*
 * This Command is only for COM-Page H-mode and SEG-Page H-mode.
 *
 * In COM-Page H-mode : ROW Start address range 0~127.   ADDR = 0x00~0x7F
 *                    : ROW End address range 0~127.     ADDR = 0x00~0x7F
 *
 * In SEG-Page H-mode : Column Start address range 0~63. ADDR = 0x00~0x3F
 *                    : Column End address range 0~63.   ADDR = 0x00~0x3F
 */
#define CONTROL_LINE_ADDRESS                        (0x21) //Setup line start and end address
#define    DATA_LINE_START_ADDRESS(ADDR)                     ((0x00)|ADDR)
#define    DATA_LINE_END_ADDRESS(ADDR)                       ((0x00)|ADDR)

/* Set Page Address */
/*
 * This Command is only for COM-Page H-mode and SEG-Page H-mode.
 *
 * In COM-Page H-mode : COM-Page Start address range 0~7.   ADDR = 0x00~0x07
 *                    : COM-Page End address range 0~7.     ADDR = 0x00~0x07
 *
 * In SEG-Page H-mode : SEG-Page Start address range 0~15.  ADDR = 0x00~0x0F
 *                    : SEG-Page End address range 0~15.    ADDR = 0x00~0x0F
 */
#define CONTROL_PAGE_ADDRESS                         (0x22) //Setup Page start and end address
#define    DATA_PAGE_START_ADDRESS(ADDR)                     ((0x00)|ADDR)
#define    DATA_PAGE_END_ADDRESS(ADDR)                       ((0x00)|ADDR)

/* Set Display Start Line */
#define CONTROL_DISPLAY_START_LINE(LINE)             ((0x40)|=LINE)) /* LINE = 0x00 ~ 0x3F */

/* Set Contrast Control */
#define CONTROL_CONTRAST_CONTROL                     (0x81)
#define    DATA_CONTRAST_VALUE(VAL)                          ((0x00)|VAL) /* VAL = 0x00 ~ 0xFF*/

/* Set Segment Re-map */
#define CONTROL_SEGMENT_RE_MAP_0                     (0xA0)
#define CONTROL_SEGMENT_RE_MAP_128                   (0xA1)

/* Entire Display ON */
#define CONTROL_ENTIRE_DISPLAY_RESET                 (0xA4) /* Output follows RAM content */
#define CONTROL_ENTIRE_DISPLAY_ON                    (0xA5) /* Output ignores RAM content */

/* Set Normal/Inverse Display */
#define CONTROL_NORMAL_DISPLAY                       (0xA6) /* 0 in RAM : OFF Display panel / 1 in RAM : ON Display panel */
#define CONTROL_INVERSE_DISPLAY                      (0xA7) /* 1 in RAM : OFF Display panel / 0 in RAM : ON Display panel */

/* Set MUX ratio to N+1 MUX */
#define CONTROL_MUX_RATIO                            (0xA8)
#define    DATA_MUX_VALUE(VAL)                              ((0x00)|VAL) /* VAL = 0x0F ~ 0x3F* (0x00~0x0E :invalid entry) */

/* Set External or internal Iref Selection */
#define CONTROL_IREF_SELECTION                       (0xAD)
#define    DATA_IREF_EXTERNAL                               (0x40)
#define    DATA_IREF_INTERNAL                               (0x50)

/* Set Display ON/OFF */
#define CONTROL_DISPLAY_OFF                          (0xAE) /* Sleep mode */
#define CONTROL_DISPLAY_ON                           (0xAF) /* Normal mode */

/*...*/


void ssd1312_Init(void);
void ssd1312_Clear(void);
void ssd1312_SetCoord(uint8_t page, uint8_t col);
void ssd1312_WriteChar(uint8_t character_Code, uint8_t page, uint16_t column);
void ssd1312_WriteString(char *str, uint8_t page, uint8_t col);

/* 221204 STJ*/
void ssd1312_DisplayON(void);
void ssd1312_DisplayOFF(void);
void ssd1312_SetContrast(uint8_t val);

#endif /* _USE_HW_SSD1312 */

#endif /* SRC_COMMON_INCLUDE_SSD1312_H_ */
