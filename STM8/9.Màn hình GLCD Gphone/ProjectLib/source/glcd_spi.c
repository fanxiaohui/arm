#include "glcd_spi.h"
#include "font5x7.h"

void lcd_write(uint8_t cd, uint8_t byte){ //SPI 4Line
    uint8_t h;
    CS=0;
    if(cd)AO=1;
    else AO=0;
    for(h=0;h<8;h++){
        if(!(byte&0x80))SDA=0;
        else SDA=1;
        SCK=0;
        delay_us(1);
        SCK=1;
        delay_us(1);
        byte<<=1;
    }
    AO=~AO;
    CS=1;
}
void lcd_gotoxy(uint8_t x, uint8_t y){
    x=x*6;//Graphic Mode thi xoa dong nay di, Text thi de lai
    lcd_write(0,(x&0x0f));
    lcd_write(0,((x>>4)&0x07)|0x10);
    lcd_write(0,(y&0x0f)|0xb0);
}
void lcd_clear(void){
    uint8_t u,w;
    for(u=0;u<8;u++){
        lcd_gotoxy(0,u);
        for(w=0;w<130;w++)
            lcd_write(1,0);
    }
    lcd_gotoxy(0,0);
}
void lcd_putchar(char dat){
    uint8_t v;
    if((dat >= 0x20) && (dat <= 0x7f)){
        dat=dat-32;
        for(v=0;v<6;v++)
            lcd_write(1, font[dat][v]);
    }
}
void lcd_puts(char *s){
    while(*s)
        lcd_putchar(*s++);
}
void lcd_init(void){//Khoi tao GLCD
    lcd_write(0,0xE2); //Reset
    delay_ms(100);       //Delay 100ms
    lcd_write(0,0xAF); //Display ON, 0xAE - OFF
    lcd_write(0,0x2F); //Power control
    lcd_clear(); //Xoa man hinh
}

