#ifndef __GLCD_SPI_H
#define __GLCD_SPI_H
#include "main.h"

void lcd_init(void);
void lcd_puts(char *s);
void lcd_putchar(char dat);
void lcd_clear(void);
void lcd_gotoxy(uint8_t x, uint8_t y);
void lcd_write(uint8_t cd, uint8_t byte);

#endif