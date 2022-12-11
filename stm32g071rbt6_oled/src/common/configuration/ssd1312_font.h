/*
 * ssd1312_font.h
 *
 *  Created on: 2022. 12. 11.
 *      Author: user
 */

#ifndef SRC_COMMON_CONFIGURATION_SSD1312_FONT_H_
#define SRC_COMMON_CONFIGURATION_SSD1312_FONT_H_

#include "hw_def.h"


#ifdef _USE_HW_FONT





#ifdef  SSD1312_FONT_12x16

#define FONT_WIDTH    12
#define FONT_HEIGHT   16

static const uint8_t FONT_TABLE [] = {
    /* @0 ' ' (12 pixels wide) */
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @24 '!' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @48 '"' (12 pixels wide) */
    //
    //      # #
    //      # #
    //      # #
    //      # #
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @72 '#' (12 pixels wide) */
    //
    //      #  #
    //      #  #
    //      #  #
    //   ########
    //     #  #
    //     #  #
    //     #  #
    //   ########
    //    #  #
    //    #  #
    //    #  #
    //
    //
    //
    //
    0x00, 0x00, 0x10, 0x10, 0xF0, 0x1E, 0x10, 0xF0, 0x1E, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x0F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00,

    /* @96 '$' (12 pixels wide) */
    //       #
    //     ####
    //    #  # #
    //    #  # #
    //    #  #
    //     # #
    //      ###
    //       # #
    //       # #
    //    #  # #
    //    #  # #
    //     ####
    //       #
    //
    //
    //
    0x00, 0x00, 0x00, 0x1C, 0x22, 0x42, 0xFF, 0x42, 0x8C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x1F, 0x08, 0x07, 0x00, 0x00, 0x00,

    /* @120 '%' (12 pixels wide) */
    //
    //   ##    #
    //  #  #  #
    //  #  #  #
    //  #  # #
    //  #  # #
    //   ##  # ##
    //      # #  #
    //      # #  #
    //     #  #  #
    //     #  #  #
    //    #    ##
    //
    //
    //
    //
    0x00, 0x3C, 0x42, 0x42, 0x3C, 0x80, 0x70, 0x8C, 0x42, 0x40, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x06, 0x01, 0x00, 0x07, 0x08, 0x08, 0x07, 0x00,

    /* @144 '&' (12 pixels wide) */
    //
    //     ##
    //    #  #
    //    #  #
    //    #  #
    //     ##
    //    ##
    //   ## #  #
    //   #   ###
    //   #   ##
    //   #   ##
    //    ###  ##
    //
    //
    //
    //
    0x00, 0x00, 0x80, 0xDC, 0x62, 0xA2, 0x1C, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x07, 0x07, 0x09, 0x08, 0x00, 0x00,

    /* @168 ''' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @192 '(' (12 pixels wide) */
    //
    //        #
    //       #
    //       #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      ##
    //       #
    //       #
    //        #
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x38, 0x40, 0x00, 0x00, 0x00, 0x00,

    /* @216 ')' (12 pixels wide) */
    //
    //     #
    //      #
    //      #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //      ##
    //      #
    //      #
    //     #
    //
    0x00, 0x00, 0x00, 0x00, 0x02, 0x0C, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x38, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @240 '*' (12 pixels wide) */
    //
    //      #
    //    #####
    //      #
    //     # #
    //     # #
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x04, 0x34, 0x0E, 0x34, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @264 '+' (12 pixels wide) */
    //
    //
    //
    //      #
    //      #
    //      #
    //   #######
    //      #
    //      #
    //      #
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x40, 0x40, 0x40, 0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @288 ',' (12 pixels wide) */
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //      #
    //      #
    //     #
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @312 '-' (12 pixels wide) */
    //
    //
    //
    //
    //
    //
    //
    //
    //     ####
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,

    /* @336 '.' (12 pixels wide) */
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //      #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @360 '/' (12 pixels wide) */
    //
    //        #
    //        #
    //        #
    //       #
    //       #
    //       #
    //      #
    //      #
    //      #
    //     #
    //     #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0x0E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @384 '0' (12 pixels wide) */
    //
    //      ##
    //     #  #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //     #  #
    //      ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @408 '1' (12 pixels wide) */
    //
    //       #
    //       #
    //      ##
    //     # #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x10, 0x08, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @432 '2' (12 pixels wide) */
    //
    //     ###
    //    #   #
    //    #    #
    //         #
    //         #
    //        #
    //       #
    //      #
    //     #
    //    #
    //    ######
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x0C, 0x02, 0x02, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0C, 0x0A, 0x09, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,

    /* @456 '3' (12 pixels wide) */
    //
    //     ###
    //    #   #
    //    #    #
    //         #
    //        #
    //      ##
    //        #
    //         #
    //    #    #
    //    #   #
    //     ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x0C, 0x02, 0x42, 0x42, 0xA4, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @480 '4' (12 pixels wide) */
    //
    //        #
    //       ##
    //       ##
    //      # #
    //      # #
    //     #  #
    //    #   #
    //    ######
    //        #
    //        #
    //        #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x80, 0x40, 0x30, 0x0C, 0xFE, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x01, 0x00, 0x00, 0x00,

    /* @504 '5' (12 pixels wide) */
    //
    //     #####
    //     #
    //     #
    //    #
    //    # ##
    //    ##  #
    //         #
    //         #
    //    #    #
    //    #   #
    //     ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x70, 0x4E, 0x22, 0x22, 0x42, 0x82, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @528 '6' (12 pixels wide) */
    //
    //      ###
    //     #   #
    //    #    #
    //    #
    //    # ##
    //    ##  #
    //    #    #
    //    #    #
    //    #    #
    //     #  #
    //      ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xF8, 0x44, 0x22, 0x22, 0x42, 0x8C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @552 '7' (12 pixels wide) */
    //
    //    ######
    //         #
    //        #
    //       #
    //       #
    //      #
    //      #
    //      #
    //     #
    //     #
    //     #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x02, 0x02, 0xC2, 0x32, 0x0A, 0x06, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @576 '8' (12 pixels wide) */
    //
    //      ##
    //     #  #
    //    #    #
    //    #    #
    //     #  #
    //      ##
    //     #  #
    //    #    #
    //    #    #
    //     #  #
    //      ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x18, 0xA4, 0x42, 0x42, 0xA4, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @600 '9' (12 pixels wide) */
    //
    //      ##
    //     #  #
    //    #    #
    //    #    #
    //    #    #
    //     #  ##
    //      ## #
    //         #
    //    #    #
    //    #   #
    //     ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x44, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @624 ':' (12 pixels wide) */
    //
    //
    //
    //
    //      #
    //
    //
    //
    //
    //
    //
    //      #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @648 ';' (12 pixels wide) */
    //
    //
    //
    //
    //      #
    //
    //
    //
    //
    //
    //
    //      #
    //      #
    //     #
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @672 '<' (12 pixels wide) */
    //
    //
    //
    //         #
    //       ##
    //     ##
    //    #
    //     ##
    //       ##
    //         #
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x40, 0xA0, 0xA0, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00,

    /* @696 '=' (12 pixels wide) */
    //
    //
    //
    //
    //
    //    ######
    //
    //
    //    ######
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,

    /* @720 '>' (12 pixels wide) */
    //
    //
    //
    //    #
    //     ##
    //       ##
    //         #
    //       ##
    //     ##
    //    #
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0xA0, 0xA0, 0x40, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @744 '?' (12 pixels wide) */
    //
    //     ####
    //    #    #
    //    #    #
    //         #
    //         #
    //        #
    //       #
    //      #
    //      #
    //
    //      #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x0C, 0x02, 0x02, 0x82, 0x42, 0x3C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @768 '@' (12 pixels wide) */
    //
    //      ####
    //     #    #
    //    #      #
    //   # ### #  #
    //  # #   ##  #
    //  # #    #  #
    //  # #    #  #
    //  # #   #   #
    //  # #   #   #
    //  # #  ##   #
    //   # ##  ###
    //    #       #
    //     #    ##
    //      ####
    //
    0x00, 0xE0, 0x10, 0xE8, 0x14, 0x12, 0x12, 0x22, 0xF2, 0x04, 0x08, 0xF0,
    0x00, 0x07, 0x08, 0x17, 0x28, 0x48, 0x44, 0x47, 0x48, 0x28, 0x28, 0x17,

    /* @792 'A' (12 pixels wide) */
    //
    //      #
    //     # #
    //     # #
    //     # #
    //    #   #
    //    #   #
    //    #####
    //   #     #
    //   #     #
    //   #     #
    //  #       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xE0, 0x9C, 0x82, 0x9C, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00,

    /* @816 'B' (12 pixels wide) */
    //
    //   ######
    //   #     #
    //   #     #
    //   #     #
    //   #     #
    //   ######
    //   #     #
    //   #     #
    //   #     #
    //   #     #
    //   ######
    //
    //
    //
    //
    0x00, 0x00, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0xBC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x00, 0x00,

    /* @840 'C' (12 pixels wide) */
    //
    //      ###
    //     #   #
    //    #     #
    //    #     #
    //    #
    //    #
    //    #
    //    #     #
    //    #     #
    //     #   #
    //      ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x04, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00,

    /* @864 'D' (12 pixels wide) */
    //
    //    #####
    //    #    #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #    #
    //    #####
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00,

    /* @888 'E' (12 pixels wide) */
    //
    //   #######
    //   #
    //   #
    //   #
    //   #
    //   #######
    //   #
    //   #
    //   #
    //   #
    //   #######
    //
    //
    //
    //
    0x00, 0x00, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,

    /* @912 'F' (12 pixels wide) */
    //
    //    ######
    //    #
    //    #
    //    #
    //    #
    //    #####
    //    #
    //    #
    //    #
    //    #
    //    #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @936 'G' (12 pixels wide) */
    //
    //     ####
    //    #    #
    //   #      #
    //   #      #
    //   #
    //   #
    //   #   ####
    //   #      #
    //   #      #
    //    #     #
    //     #####
    //
    //
    //
    //
    0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x82, 0x82, 0x84, 0x98, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x00,

    /* @960 'H' (12 pixels wide) */
    //
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #######
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,

    /* @984 'I' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1008 'J' (12 pixels wide) */
    //
    //         #
    //         #
    //         #
    //         #
    //         #
    //         #
    //         #
    //     #   #
    //     #   #
    //     #   #
    //      ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x07, 0x00, 0x00, 0x00,

    /* @1032 'K' (12 pixels wide) */
    //
    //   #     #
    //   #    #
    //   #   #
    //   #  #
    //   # #
    //   ## #
    //   #  #
    //   #   #
    //   #    #
    //   #    #
    //   #     #
    //
    //
    //
    //
    0x00, 0x00, 0xFE, 0x40, 0x20, 0xD0, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x00, 0x00, 0x00,

    /* @1056 'L' (12 pixels wide) */
    //
    //     #
    //     #
    //     #
    //     #
    //     #
    //     #
    //     #
    //     #
    //     #
    //     #
    //     ######
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,

    /* @1080 'M' (12 pixels wide) */
    //
    //  ##     ##
    //  ##     ##
    //  # #   # #
    //  # #   # #
    //  # #   # #
    //  # #   # #
    //  #  # #  #
    //  #  # #  #
    //  #  # #  #
    //  #   #   #
    //  #   #   #
    //
    //
    //
    //
    0x00, 0xFE, 0x06, 0x78, 0x80, 0x00, 0x80, 0x78, 0x06, 0xFE, 0x00, 0x00,
    0x00, 0x0F, 0x00, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x00, 0x0F, 0x00, 0x00,

    /* @1104 'N' (12 pixels wide) */
    //
    //    #     #
    //    ##    #
    //    ##    #
    //    # #   #
    //    # #   #
    //    #  #  #
    //    #  #  #
    //    #   # #
    //    #    ##
    //    #    ##
    //    #     #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x06, 0x0F, 0x00, 0x00,

    /* @1128 'O' (12 pixels wide) */
    //
    //     ####
    //    #    #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //    #    #
    //     ####
    //
    //
    //
    //
    0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00,

    /* @1152 'P' (12 pixels wide) */
    //
    //   ######
    //   #     #
    //   #     #
    //   #     #
    //   #     #
    //   ######
    //   #
    //   #
    //   #
    //   #
    //   #
    //
    //
    //
    //
    0x00, 0x00, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1176 'Q' (12 pixels wide) */
    //
    //     ####
    //    #    #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #      #
    //   #   # ##
    //    #   ##
    //     ###  #
    //          #
    //
    //
    //
    0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x0A, 0x04, 0x06, 0x1B, 0x00, 0x00,

    /* @1200 'R' (12 pixels wide) */
    //
    //    ######
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    ######
    //    #   ##
    //    #    #
    //    #     #
    //    #     #
    //    #      #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x42, 0x42, 0x42, 0xC2, 0xC2, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x00,

    /* @1224 'S' (12 pixels wide) */
    //
    //     ###
    //    #   #
    //   #     #
    //   #     #
    //    #
    //     ###
    //        #
    //   #     #
    //   #     #
    //    #   #
    //     ###
    //
    //
    //
    //
    0x00, 0x00, 0x18, 0x24, 0x42, 0x42, 0x42, 0x84, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @1248 'T' (12 pixels wide) */
    //
    //   #######
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //
    //
    //
    //
    0x00, 0x00, 0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1272 'U' (12 pixels wide) */
    //
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //    #     #
    //     #   #
    //      ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00,

    /* @1296 'V' (12 pixels wide) */
    //
    //  #       #
    //   #     #
    //   #     #
    //   #     #
    //    #   #
    //    #   #
    //    #   #
    //     # #
    //     # #
    //     # #
    //      #
    //
    //
    //
    //
    0x00, 0x02, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x1C, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1320 'W' (12 pixels wide) */
    //
    // #    #    #
    // #   # #   #
    // #   # #   #
    // #   # #   #
    //  #  # #  #
    //  # #   # #
    //  # #   # #
    //  # #   # #
    //  # #   # #
    //   #     #
    //   #     #
    //
    //
    //
    //
    0x1E, 0xE0, 0x00, 0xC0, 0x3C, 0x02, 0x3C, 0xC0, 0x00, 0xE0, 0x1E, 0x00,
    0x00, 0x03, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x00,

    /* @1344 'X' (12 pixels wide) */
    //
    //   #      #
    //    #    #
    //     #  #
    //     #  #
    //      ##
    //      #
    //      ##
    //     #  #
    //     #  #
    //    #    #
    //   #      #
    //
    //
    //
    //
    0x00, 0x00, 0x02, 0x04, 0x18, 0xE0, 0xA0, 0x18, 0x04, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x04, 0x03, 0x00, 0x00, 0x03, 0x04, 0x08, 0x00, 0x00,

    /* @1368 'Y' (12 pixels wide) */
    //
    //  #       #
    //   #     #
    //    #   #
    //    #   #
    //     # #
    //     # #
    //      #
    //      #
    //      #
    //      #
    //      #
    //
    //
    //
    //
    0x00, 0x02, 0x04, 0x18, 0x60, 0x80, 0x60, 0x18, 0x04, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1392 'Z' (12 pixels wide) */
    //
    //   #######
    //         #
    //        #
    //       #
    //       #
    //      #
    //     #
    //     #
    //    #
    //   #
    //   #######
    //
    //
    //
    //
    0x00, 0x00, 0x02, 0x02, 0x82, 0x42, 0x32, 0x0A, 0x06, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0C, 0x0A, 0x09, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,

    /* @1416 '[' (12 pixels wide) */
    //
    //      ##
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      ##
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1440 '\' (12 pixels wide) */
    //
    //     #
    //     #
    //      #
    //      #
    //      #
    //      #
    //       #
    //       #
    //       #
    //        #
    //        #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 0x00, 0x00,

    /* @1464 ']' (12 pixels wide) */
    //
    //      ##
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //      ##
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1488 '^' (12 pixels wide) */
    //
    //      #
    //      #
    //     # #
    //     # #
    //     # #
    //    #   #
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x40, 0x38, 0x06, 0x38, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1512 '_' (12 pixels wide) */
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //    #######
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00,

    /* @1536 '`' (12 pixels wide) */
    //
    //      #
    //       #
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1560 'a' (12 pixels wide) */
    //
    //
    //
    //
    //      ##
    //     #  #
    //     #   #
    //        ##
    //      ## #
    //     #   #
    //     #  ##
    //      ## #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x10, 0xA0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09, 0x04, 0x0F, 0x00, 0x00, 0x00,

    /* @1584 'b' (12 pixels wide) */
    //
    //    #
    //    #
    //    #
    //    # ##
    //    ##  #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //    ##  #
    //    # ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xFE, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @1608 'c' (12 pixels wide) */
    //
    //
    //
    //
    //       ##
    //      #  #
    //     #   #
    //     #
    //     #
    //     #   #
    //      #  #
    //       ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x60, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x06, 0x00, 0x00, 0x00,

    /* @1632 'd' (12 pixels wide) */
    //
    //         #
    //         #
    //         #
    //      ## #
    //     #  ##
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //     #  ##
    //      ## #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x20, 0xFE, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x0F, 0x00, 0x00, 0x00,

    /* @1656 'e' (12 pixels wide) */
    //
    //
    //
    //
    //      ##
    //     #  #
    //    #    #
    //    ######
    //    #
    //    #    #
    //     #  #
    //      ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xC0, 0xA0, 0x90, 0x90, 0xA0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00,

    /* @1680 'f' (12 pixels wide) */
    //
    //       ##
    //       #
    //       #
    //      ###
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFE, 0x12, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1704 'g' (12 pixels wide) */
    //
    //
    //
    //
    //      ## #
    //     #  ##
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //     #  ##
    //      ## #
    //    #    #
    //    #   #
    //     ###
    //
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x20, 0xF0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33, 0x44, 0x48, 0x48, 0x24, 0x1F, 0x00, 0x00, 0x00,

    /* @1728 'h' (12 pixels wide) */
    //
    //     #
    //     #
    //     #
    //     # ##
    //     ##  #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,

    /* @1752 'i' (12 pixels wide) */
    //
    //       #
    //
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1776 'j' (12 pixels wide) */
    //
    //       #
    //
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //      ##
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1800 'k' (12 pixels wide) */
    //
    //     #
    //     #
    //     #
    //     #   #
    //     #  #
    //     # #
    //     ###
    //     #  #
    //     #  #
    //     #   #
    //     #   #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x80, 0xC0, 0x20, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 0x00,

    /* @1824 'l' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1848 'm' (12 pixels wide) */
    //
    //
    //
    //
    //  # ## ###
    //  ##  ##  #
    //  #   #   #
    //  #   #   #
    //  #   #   #
    //  #   #   #
    //  #   #   #
    //  #   #   #
    //
    //
    //
    //
    0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x30, 0x10, 0x10, 0xE0, 0x00, 0x00,
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,

    /* @1872 'n' (12 pixels wide) */
    //
    //
    //
    //
    //     # ##
    //     ##  #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,

    /* @1896 'o' (12 pixels wide) */
    //
    //
    //
    //
    //      ##
    //     #  #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //     #  #
    //      ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @1920 'p' (12 pixels wide) */
    //
    //
    //
    //
    //    # ##
    //    ##  #
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //    ##  #
    //    # ##
    //    #
    //    #
    //    #
    //
    0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0x10, 0x20, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7F, 0x04, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00,

    /* @1944 'q' (12 pixels wide) */
    //
    //
    //
    //
    //      ## #
    //     #  ##
    //    #    #
    //    #    #
    //    #    #
    //    #    #
    //     #  ##
    //      ## #
    //         #
    //         #
    //         #
    //
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x20, 0xF0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x7F, 0x00, 0x00, 0x00,

    /* @1968 'r' (12 pixels wide) */
    //
    //
    //
    //
    //      # #
    //      ##
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @1992 's' (12 pixels wide) */
    //
    //
    //
    //
    //      ###
    //     #   #
    //     #
    //      ##
    //        #
    //     #   #
    //     #   #
    //      ###
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x90, 0x10, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00, 0x00,

    /* @2016 't' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //      ###
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       ##
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFE, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00,

    /* @2040 'u' (12 pixels wide) */
    //
    //
    //
    //
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #   #
    //     #  ##
    //      ## #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x04, 0x0F, 0x00, 0x00, 0x00,

    /* @2064 'v' (12 pixels wide) */
    //
    //
    //
    //
    //    #     #
    //     #   #
    //     #   #
    //     #   #
    //      # #
    //      # #
    //      # #
    //       #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00,

    /* @2088 'w' (12 pixels wide) */
    //
    //
    //
    //
    //   #   #   #
    //   #   #   #
    //    # # # #
    //    # # # #
    //    # # # #
    //    # # # #
    //     #   #
    //     #   #
    //
    //
    //
    //
    0x00, 0x00, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x00,

    /* @2112 'x' (12 pixels wide) */
    //
    //
    //
    //
    //     #   #
    //      # #
    //      # #
    //       #
    //       #
    //      # #
    //      # #
    //     #   #
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x10, 0x60, 0x80, 0x60, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x01, 0x06, 0x08, 0x00, 0x00, 0x00,

    /* @2136 'y' (12 pixels wide) */
    //
    //
    //
    //
    //    #     #
    //     #   #
    //     #   #
    //     #   #
    //      # #
    //      # #
    //      # #
    //       #
    //       #
    //       #
    //     ##
    //
    0x00, 0x00, 0x00, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x47, 0x38, 0x07, 0x00, 0x00, 0x00, 0x00,

    /* @2160 'z' (12 pixels wide) */
    //
    //
    //
    //
    //     #####
    //         #
    //        #
    //       #
    //       #
    //      #
    //     #
    //     #####
    //
    //
    //
    //
    0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x90, 0x50, 0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0C, 0x0A, 0x09, 0x08, 0x08, 0x00, 0x00, 0x00,

    /* @2184 '{' (12 pixels wide) */
    //
    //      ##
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //     #
    //      #
    //      #
    //      #
    //      #
    //      #
    //      ##
    //
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x7E, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @2208 '|' (12 pixels wide) */
    //
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    //       #
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @2232 '}' (12 pixels wide) */
    //
    //     ##
    //      #
    //      #
    //      #
    //      #
    //      #
    //      #
    //       #
    //      #
    //      #
    //      #
    //      #
    //      #
    //     ##
    //
    0x00, 0x00, 0x00, 0x00, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x7E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

    /* @2256 '~' (12 pixels wide) */
    //
    //
    //
    //
    //
    //    ###  #
    //   #  ####
    //
    //
    //
    //
    //
    //
    //
    //
    //
    0x00, 0x00, 0x40, 0x20, 0x20, 0x60, 0x40, 0x40, 0x60, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif /* SSD1312_FONT_12x16 */






#endif /* _USE_HW_FONT */
#endif /* SRC_COMMON_CONFIGURATION_SSD1312_FONT_H_ */
