
#ifndef __DEF_STM32_H
#define __DEF_STM32_H
#ifndef USE_STDPERIPH_DRIVER
#define USE_STDPERIPH_DRIVER
#endif
/*****************************************************************************/
#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr)) 
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 
//IO
#define GPIOA_ODR_Addr    (GPIOA_BASE+0x14) //0x4001080C 
#define GPIOB_ODR_Addr    (GPIOB_BASE+0x14) //0x40010C0C 
#define GPIOC_ODR_Addr    (GPIOC_BASE+0x14) //0x4001100C 
#define GPIOD_ODR_Addr    (GPIOD_BASE+0x14) //0x4001140C 
#define GPIOE_ODR_Addr    (GPIOE_BASE+0x14) //0x4001180C 
#define GPIOF_ODR_Addr    (GPIOF_BASE+0x14) //0x40011A0C    
#define GPIOG_ODR_Addr    (GPIOG_BASE+0x14) //0x40011E0C    

#define GPIOA_IDR_Addr    (GPIOA_BASE+0x10) //0x40010808 
#define GPIOB_IDR_Addr    (GPIOB_BASE+0x10) //0x40010C08 
#define GPIOC_IDR_Addr    (GPIOC_BASE+0x10) //0x40011008 
#define GPIOD_IDR_Addr    (GPIOD_BASE+0x10) //0x40011408 
#define GPIOE_IDR_Addr    (GPIOE_BASE+0x10) //0x40011808 
#define GPIOF_IDR_Addr    (GPIOF_BASE+0x10) //0x40011A08 
#define GPIOG_IDR_Addr    (GPIOG_BASE+0x10) //0x40011E08 
#define PORTA(n)   			BIT_ADDR(GPIOA_ODR_Addr,n)  // 
#define PINA(n)    			BIT_ADDR(GPIOA_IDR_Addr,n)  // 

#define PORTB(n)   			BIT_ADDR(GPIOB_ODR_Addr,n)  //
#define PINB(n)    			BIT_ADDR(GPIOB_IDR_Addr,n)  //

#define PORTC(n)   			BIT_ADDR(GPIOC_ODR_Addr,n)  //
#define PINC(n)    			BIT_ADDR(GPIOC_IDR_Addr,n)  //

#define PORTD(n)   			BIT_ADDR(GPIOD_ODR_Addr,n)  //
#define PIND(n)    			BIT_ADDR(GPIOD_IDR_Addr,n)  //

#define PORTE(n)   			BIT_ADDR(GPIOE_ODR_Addr,n)  //
#define PINE(n)    			BIT_ADDR(GPIOE_IDR_Addr,n)  //

#define PORTF(n)   			BIT_ADDR(GPIOF_ODR_Addr,n)  //
#define PINF(n)    			BIT_ADDR(GPIOF_IDR_Addr,n)  //

#define PORTG(n)   			BIT_ADDR(GPIOG_ODR_Addr,n)  //
#define PING(n)    			BIT_ADDR(GPIOG_IDR_Addr,n)  //
/***************************************************************/
/***************** I/O A *************************/
#define PORTA_0			PORTA(0)
#define PORTA_1			PORTA(1)
#define PORTA_2			PORTA(2)
#define PORTA_3			PORTA(3)
#define PORTA_4			PORTA(4)
#define PORTA_5			PORTA(5)
#define PORTA_6			PORTA(6)
#define PORTA_7			PORTA(7)
#define PORTA_8			PORTA(8)
#define PORTA_9			PORTA(9)
#define PORTA_10		PORTA(10)
#define PORTA_11		PORTA(11)
#define PORTA_12		PORTA(12)
#define PORTA_13		PORTA(13)
#define PORTA_14		PORTA(14)
#define PORTA_15		PORTA(15)
#define PINA_0			PINA(0)
#define PINA_1			PINA(1)
#define PINA_2			PINA(2)
#define PINA_3			PINA(3)
#define PINA_4			PINA(4)
#define PINA_5			PINA(5)
#define PINA_6			PINA(6)
#define PINA_7			PINA(7)
#define PINA_8			PINA(8)
#define PINA_9			PINA(9)
#define PINA_10			PINA(10)
#define PINA_11			PINA(11)
#define PINA_12			PINA(12)
#define PINA_13			PINA(13)
#define PINA_14			PINA(14)
#define PINA_15			PINA(15)
/***************** I/O B *************************/
#define PORTB_0			PORTB(0)
#define PORTB_1			PORTB(1)
#define PORTB_2			PORTB(2)
#define PORTB_3			PORTB(3)
#define PORTB_4			PORTB(4)
#define PORTB_5			PORTB(5)
#define PORTB_6			PORTB(6)
#define PORTB_7			PORTB(7)
#define PORTB_8			PORTB(8)
#define PORTB_9			PORTB(9)
#define PORTB_10			PORTB(10)
#define PORTB_11			PORTB(11)
#define PORTB_12			PORTB(12)
#define PORTB_13			PORTB(13)
#define PORTB_14			PORTB(14)
#define PORTB_15			PORTB(15)
#define PINB_0			PINB(0)
#define PINB_1			PINB(1)
#define PINB_2			PINB(2)
#define PINB_3			PINB(3)
#define PINB_4			PINB(4)
#define PINB_5			PINB(5)
#define PINB_6			PINB(6)
#define PINB_7			PINB(7)
#define PINB_8			PINB(8)
#define PINB_9			PINB(9)
#define PINB_10			PINB(10)
#define PINB_11			PINB(11)
#define PINB_12			PINB(12)
#define PINB_13			PINB(13)
#define PINB_14			PINB(14)
#define PINB_15			PINB(15)
/***************** I/O C *************************/
#define PORTC_0			PORTC(0)
#define PORTC_1			PORTC(1)
#define PORTC_2			PORTC(2)
#define PORTC_3			PORTC(3)
#define PORTC_4			PORTC(4)
#define PORTC_5			PORTC(5)
#define PORTC_6			PORTC(6)
#define PORTC_7			PORTC(7)
#define PORTC_8			PORTC(8)
#define PORTC_9			PORTC(9)
#define PORTC_10		PORTC(10)
#define PORTC_11		PORTC(11)
#define PORTC_12		PORTC(12)
#define PORTC_13		PORTC(13)
#define PORTC_14		PORTC(14)
#define PORTC_15		PORTC(15)
#define PINC_0			PINC(0)
#define PINC_1			PINC(1)
#define PINC_2			PINC(2)
#define PINC_3			PINC(3)
#define PINC_4			PINC(4)
#define PINC_5			PINC(5)
#define PINC_6			PINC(6)
#define PINC_7			PINC(7)
#define PINC_8			PINC(8)
#define PINC_9			PINC(9)
#define PINC_10			PINC(10)
#define PINC_11			PINC(11)
#define PINC_12			PINC(12)
#define PINC_13			PINC(13)
#define PINC_14			PINC(14)
#define PINC_15			PINC(15)
/***************** I/O D *************************/
#define PORTD_0			PORTD(0)
#define PORTD_1			PORTD(1)
#define PORTD_2			PORTD(2)
#define PORTD_3			PORTD(3)
#define PORTD_4			PORTD(4)
#define PORTD_5			PORTD(5)
#define PORTD_6			PORTD(6)
#define PORTD_7			PORTD(7)
#define PORTD_8			PORTD(8)
#define PORTD_9			PORTD(9)
#define PORTD_10		PORTD(10)
#define PORTD_11		PORTD(11)
#define PORTD_12		PORTD(12)
#define PORTD_13		PORTD(13)
#define PORTD_14		PORTD(14)
#define PORTD_15		PORTD(15)
#define PIND_0			PIND(0)
#define PIND_1			PIND(1)
#define PIND_2			PIND(2)
#define PIND_3			PIND(3)
#define PIND_4			PIND(4)
#define PIND_5			PIND(5)
#define PIND_6			PIND(6)
#define PIND_7			PIND(7)
#define PIND_8			PIND(8)
#define PIND_9			PIND(9)
#define PIND_10			PIND(10)
#define PIND_11			PIND(11)
#define PIND_12			PIND(12)
#define PIND_13			PIND(13)
#define PIND_14			PIND(14)
#define PIND_15			PIND(15)
/***************** I/O E *************************/
#define PORTE_0			PORTE(0)
#define PORTE_1			PORTE(1)
#define PORTE_2			PORTE(2)
#define PORTE_3			PORTE(3)
#define PORTE_4			PORTE(4)
#define PORTE_5			PORTE(5)
#define PORTE_6			PORTE(6)
#define PORTE_7			PORTE(7)
#define PORTE_8			PORTE(8)
#define PORTE_9			PORTE(9)
#define PORTE_10		PORTE(10)
#define PORTE_11		PORTE(11)
#define PORTE_12		PORTE(12)
#define PORTE_13		PORTE(13)
#define PORTE_14		PORTE(14)
#define PORTE_15		PORTE(15)
#define PINE_0			PINE(0)
#define PINE_1			PINE(1)
#define PINE_2			PINE(2)
#define PINE_3			PINE(3)
#define PINE_4			PINE(4)
#define PINE_5			PINE(5)
#define PINE_6			PINE(6)
#define PINE_7			PINE(7)
#define PINE_8			PINE(8)
#define PINE_9			PINE(9)
#define PINE_10			PINE(10)
#define PINE_11			PINE(11)
#define PINE_12			PINE(12)
#define PINE_13			PINE(13)
#define PINE_14			PINE(14)
#define PINE_15			PINE(15)
#endif
