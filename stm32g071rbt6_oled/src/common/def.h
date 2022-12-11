/*
 * def.h
 *
 *  Created on: Oct 30, 2022
 *      Author: user
 */

#ifndef SRC_COMMON_DEF_H_
#define SRC_COMMON_DEF_H_

//TODO: 공용헤더추가
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>



/*
  Page : (= Row, X axis, COM0 ~ COM63)
  Page is 8 sets of COM0~COM63.
      - COM0  ~ COM7   = 0 Page
      - COM8  ~ COMP15 = 1 Page
      - COM16 ~ COM23  = 2 Page
      - COM24 ~ COM31  = 3 Page
      - COM32 ~ COM39  = 4 Page
      - COM40 ~ COM47  = 5 Page
      - COM48 ~ COM55  = 6 Page
      - COM56 ~ COM63  = 7 Page
 */
#define _DEF_PAGE_NUM_MIN       1
#define _DEF_PAGE_NUM_MAX       8


/*
  COLUMN : (= Y axis, SEG 0 ~ SEG 127)
  COLUMN is 128 sets of SEG0~SEG127.
      - SEG 0  =  0 COLUMN
      - SEG 1  =  1 COLUMN
      - SEG 2  =  2 COLUMN
              ...
      - SEG 127 = 127 COLUMN
 */
#define _DEF_COLUMN_NUM_MIN     1
#define _DEF_COLUMN_NUM_MAX     128



#define FAIL                    0
#define OK                      1
#define READY                   2

#define OFF                     0
#define ON                      1

#define CLEAR                   0
//#define SET                     1

#define _DEF_LED1               0

#define _DEF_INPUT              0
#define _DEF_INPUT_PULLUP       1
#define _DEF_INPUT_PULLDOWN     2
#define _DEF_OUTPUT             3
#define _DEF_OUTPUT_PULLUP      4
#define _DEF_OUTPUT_PULLDWON    5

#define _DEF_LOW                0
#define _DEF_HIHG               1










/*

  ex) Normal


                          ========================================================
   Page0 (COM0-COM7) ->  |                                                        |
                          ========================================================
                          ^                                                      ^
                          |                                                      |
                         SEG0                   ... SEG64 ...                  SEG127
                       (Column 0)                 (Column 64)                (Column 127)




 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

   ex) Row re-mapping (상하반전 : Invert up and down)


                          ========================================================
                         |                                                        |<- Page0 (COM63-COM56)
                          ========================================================
                          ^                                                      ^
                          |                                                      |
                         SEG0                   ... SEG64 ...                  SEG127
                       (Column 0)                 (Column 64)                (Column 127)



  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

   ex) Column re-mapping (좌우반전 : Invert left and right)


                          ========================================================
   Page0 (COM0-COM7) ->  |                                                        |
                          ========================================================
                          ^                                                      ^
                          |                                                      |
                         SEG127                   ... SEG64 ...                  SEG0
                      (Column 127)                 (Column 64)                (Column 0)




 */


#endif /* SRC_COMMON_DEF_H_ */
