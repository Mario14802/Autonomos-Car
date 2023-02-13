/*
 * LCD.h
 */

#ifndef LCD_H_
#define LCD_H_

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "lcd_config.h"
#include "../../STD_TYPES.h"


#define LCD_CMD_CLEAR_DISPLAY	             0x01
#define LCD_CMD_CURSOR_HOME		             0x02

// Display control
#define LCD_CMD_DISPLAY_OFF                0x08
#define LCD_CMD_DISPLAY_NO_CURSOR          0x0c
#define LCD_CMD_DISPLAY_CURSOR_NO_BLINK    0x0E
#define LCD_CMD_DISPLAY_CURSOR_BLINK       0x0F

// Function set
#define LCD_CMD_4BIT_2ROW_5X7              0x28
#define LCD_CMD_8BIT_2ROW_5X7              0x38

#define LCD_Line1_1stAddress                0x80
#define LCD_Line2_1stAddress                0xC0


#define CGRAM_CMD_OFFSET                     0X40
#define DDRAM_CMD_OFFSET                     0X80

//functions prototype
void lcd_init(void);
void lcd_send_command (u8 );
void lcd_write_character(u8 );
void lcd_write_word(u8[]);
void lcd_clear(void);
void lcd_set_courser(u8,u8);
void lcd_goto_xy (u8 , u8 );



#endif /* LCD_H_ */
