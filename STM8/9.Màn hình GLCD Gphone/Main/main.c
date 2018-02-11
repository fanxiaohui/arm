/****************************************************
****Lap trinh giao tiep Graphic LCD 128x64 SPI (Gphone/HomePhone)****
*******Code by Vu Van Thai - SangTaoClub.Net*********
- Mot so lenh hien thi cho GLCD:
	1. lcd_write(0,0xC8); //Hien thi nguoc, 0xC0 - Binh thuong
	2. lcd_write(0,0xA7); //Hien thi am ban, 0xA6 - Binh thuong
	3. lcd_write(0,0xA5); //Hien thi all pixel, 0xA4 - Binh thuong
- Cac ham giao tiep GLCD:
	1. lcd_init(); //Khoi tao GLCD
	2. lcd_write(CD, DATA_BYTE);
		//CD Select: 0 - Command, 1 - Display Data
		//DATA_BYTE: Du lieu can ghi vao LCD
	3. lcd_clear(); //Xoa man hinh
	4. lcd_gotoxy(X, Y);
		//X la vi tri hien thi 0-20 (Text font 5x7), Graphic 0-127
		//Y la dong hien thi 0-7
	5. lcd_putchar('Data_ASCII'); //Hien thi mot ky tu ASCII len man hinh
	5. lcd_puts("String"); //Hien thi mot chuoi len man hinh

#define CS      PORTD_2 //Chon chip
#define SDA     PORTD_3 //Data SPI
#define AO      PORTD_4 //Chot du lieu Command va Data (C/D)
#define SCK     PORTD_5 //Clock SPI
****************************************************/
#include "main.h"
void main(void)
{
    uint16_t dem=0;
    CLOCK_Init();
    GPIO_Config();
    delay_ms(500);
    lcd_init();
    delay_ms(100);
    lcd_puts("Test Graphic LCD12864");
    delay_ms(1000);
    lcd_gotoxy(0,1);
    lcd_puts("By Vu Thai");
    lcd_gotoxy(0,3);
    lcd_puts("SangTaoClub.Net");
    lcd_gotoxy(0,6);
    lcd_puts("Num: ");
    delay_ms(2000);
    while(1)
    {
        lcd_gotoxy(5,6);
        lcd_putchar((dem/1000)+48); //Ngan
        lcd_putchar(((dem%1000)/100)+48); //Tram
        lcd_putchar(((dem%100)/10)+48);  //Chuc
        lcd_putchar((dem%10)+48);	//Don vi
		if(++dem>9999)dem=0;
		delay_ms(200);
    }
}