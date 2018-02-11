#ifndef __MAIN_H
#define __MAIN_H
#define eeprom           __eeprom __no_init
/*    Kieu So Nguyen Co Dau    */
typedef  long  int    int32_t;
typedef  int          int16_t;
typedef  char         int8_t;

/*	Kieu So Nguyen Khong Dau */
typedef unsigned long  uint32_t;
typedef unsigned int uint16_t;
typedef unsigned char  uint8_t;
/*	Kieu So Thuc */
typedef   float            float32_t;
/*******************************************************************************
   - STANDAR C - STANDAR C - STANDAR C - STANDAR C - STANDAR C - STANDAR C -
*******************************************************************************/
#include "defstm8s.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
/*******************************************************************************
   - FWLIB - FWLIB - FWLIB - FWLIB - FWLIB - FWLIB - FWLIB - FWLIB - FWLIB -
*******************************************************************************/
//#include "stm8s_awu.h"
//#include "stm8s_spi.h"
//#include "stm8s_adc1.h"
#include "stm8s_clk.h"
//#include "stm8s_beep.h"
//#include "stm8s_iwdg.h"
//#include "stm8s_flash.h"
//#include "stm8s_tim1.h"
//#include "stm8s_tim2.h"
//#include "stm8s_tim3.h"
//#include "stm8s_tim4.h"
//#include "stm8s_uart2.h"
//#include "stm8s_exti.h"
//#include "stm8s_itc.h"
/*******************************************************************************
   - USER STM8 - USER STM8 - USER STM8 - USER STM8 - USER STM8 - USER STM8 -
*******************************************************************************/
#include "clock.h"
#include "gpio.h"
/*******************************************************************************
   - USER - USER - USER - USER - USER - USER - USER - USER - USER - USER -
*******************************************************************************/
#include "delay.h"        // tao cac ham delay ms, delay us
/*******************************************************************************
 PROJECT - PROJECT - PROJECT - PROJECT - PROJECT - PROJECT - PROJECT - PROJECT
*******************************************************************************/
#include "glcd_spi.h"
/*******************************************************************************
 --- DEFINE PORT PIN - DEFINE PORT PIN - DEFINE PORT PIN - DEFINE PORT PIN ---
*******************************************************************************/
#define CS      PORTD_2 //Chon chip
#define SDA     PORTD_3 //Data SPI
#define AO      PORTD_4 //Chot du lieu Command va Data (C/D)
#define SCK     PORTD_5 //Clock SPI

#endif
/******************************KET THUC FILE******************************/