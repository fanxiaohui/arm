#ifndef __MAIN_H
#define	__MAIN_H	
/*****************************COMPILER LIB**********************************/
#include  <stdarg.h>			//Cac thu vien cua trinh bien dich
#include  <string.h>
#include  <ctype.h>
#include  <stdlib.h>
#include  <stdio.h>
#include  <stddef.h>
/****************************FW LIB*****************************************/
#include "misc.h"
#include "DEF_STM32.h"
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
/******************************************************************************
  USERSTM32 LIB - USERSTM32 LIB - USERSTM32 LIB - USERSTM32 LIB - USERSTM32 LIB 
******************************************************************************/
#include "user_delay.h"
#include "user_gpio.h"
#include "user_interrupt.h"
#include "user_system.h"
/***************************PROJECT LIB*************************************/ 
#include "glcd_spi.h" 
/***************************DEFINE GPIO*************************************/
#define CS      PORTA_1 //Chon chip
#define SDA     PORTA_2 //Data SPI
#define AO      PORTA_3 //Chot du lieu Command va Data (C/D)
#define SCK     PORTA_4 //Clock SPI

#endif 
