

/* Includes ------------------------------------------------------------------*/
#include "user_interrupt.h"


/*******************************************************************************
* Description    : This function handles NMI exception.
*******************************************************************************/
void NMI_Handler(void)
{
 
}

/*******************************************************************************
* Description    : This function handles Hard Fault exception.
*******************************************************************************/
void HardFault_Handler(void)
{
	printf("HardFaultException\r\n");
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Description    : This function handles Memory Manage exception.
*******************************************************************************/
void MemManage_Handler(void)
{
	//printf("MemManageException\r\n");
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Description    : This function handles Bus Fault exception.
*******************************************************************************/
void BusFault_Handler(void)
{
	//printf("BusFaultException\r\n");
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Description    : This function handles Usage Fault exception.
*******************************************************************************/
void UsageFault_Handler(void)
{
	//printf("UsageFaultException\r\n");
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Description    : This function handles Debug Monitor exception.
*******************************************************************************/
void DebugMon_Handler(void)
{
}

/*******************************************************************************
* Description    : This function handles SVCall exception
*******************************************************************************/
void SVC_Handler(void)
{
}

/*******************************************************************************
* Description    : This function handles PendSVC exception.
*******************************************************************************/
void PendSV_Handler(void)
{
}

/*******************************************************************************
* Description    : This function handles SysTick Handler.
*******************************************************************************/
void SysTick_Handler(void)
{
}
/*******************************************************************************
* Description    : This function handles WWDG interrupt request.
*******************************************************************************/
void WWDG_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles PVD interrupt request.
*******************************************************************************/
void PVD_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles Tamper interrupt request. 
*******************************************************************************/
void TAMPER_IRQHandler(void)
{
}



/*******************************************************************************
* Description    : This function handles Flash interrupt request.
*******************************************************************************/
void FLASH_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles RCC interrupt request. 
*******************************************************************************/
void RCC_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles External interrupt Line 0 request.
*******************************************************************************/
void EXTI0_IRQHandler(void)
{
}

/******************************************************************************
* Description    : This function handles External interrupt Line 1 request.
*******************************************************************************/
void EXTI1_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles External interrupt Line 2 request.
*******************************************************************************/
void EXTI2_IRQHandler(void)
{

}
/*******************************************************************************
* Description    : This function handles External interrupt Line 3 request.
*******************************************************************************/
void EXTI3_IRQHandler(void)
{  
}

/*******************************************************************************
* Description    : This function handles External interrupt Line 4 request.
*******************************************************************************/
void EXTI4_IRQHandler(void)
{  
}

/*******************************************************************************
* Description    : This function handles DMA1 Channel 1 interrupt request.
*******************************************************************************/
void DMAChannel1_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA1 Channel 2 interrupt request.
*******************************************************************************/
void DMA1_Channel2_IRQHandler(void)
{
}

/******************************************************************************
* Description    : This function handles DMA1 Channel 3 interrupt request.
*******************************************************************************/
void DMA1_Channel3_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA1 Channel 4 interrupt request.
*******************************************************************************/
void DMA1_Channel4_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA1 Channel 5 interrupt request.
*******************************************************************************/
void DMA1_Channel5_IRQHandler(void)
{
}
/*******************************************************************************
* Description    : This function handles DMA1 Channel 6 interrupt request.
*******************************************************************************/
void DMA1_Channel6_IRQHandler(void)
{
}
/*******************************************************************************
* Description    : This function handles DMA1 Channel 7 interrupt request.
*******************************************************************************/
void DMA1_Channel7_IRQHandler(void)
{
}
/*******************************************************************************
* Description    : This function handles ADC1 and ADC2 global interrupts requests.
*******************************************************************************/
void ADC1_2_IRQHandler(void)
{
    
}
/*******************************************************************************
* Description    : This function handles USB High Priority or CAN TX interrupts 
*                  requests.
*******************************************************************************/
void USB_HP_CAN_TX_IRQHandler(void)
{
 
}
/*******************************************************************************
* Description    : This function handles USB Low Priority or CAN RX0 interrupts 
*                  requests.
*******************************************************************************/
void USB_LP_CAN1_RX0_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles CAN RX1 interrupt request.
*******************************************************************************/
void CAN_RX1_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles CAN SCE interrupt request.
*******************************************************************************/
void CAN_SCE_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles External lines 9 to 5 interrupt request.
*******************************************************************************/
void EXTI9_5_IRQHandler(void)
{ 
}
/*******************************************************************************
* Description    : This function handles TIM1 Break interrupt request.
*******************************************************************************/
void TIM1_BRK_IRQHandler(void)
{
}
/*******************************************************************************
* Description    : This function handles TIM1 overflow and update interrupt 
*                  request.
*******************************************************************************/
void TIM1_UP_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM1 Trigger and commutation interrupts 
*                  requests.
*******************************************************************************/
void TIM1_TRG_COM_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM1 capture compare interrupt request.
*******************************************************************************/
void TIM1_CC_IRQHandler(void)
{

}

/*******************************************************************************
* Description    : This function handles TIM2 global interrupt request.
*******************************************************************************/
void TIM2_IRQHandler(void)
{     
}

/*******************************************************************************
* Description    : This function handles TIM3 global interrupt request.	  
*******************************************************************************/
void TIM3_IRQHandler(void)
{ 
}

/*******************************************************************************
* Description    : This function handles TIM4 global interrupt request.
*******************************************************************************/
void TIM4_IRQHandler(void)
{

}

/*******************************************************************************
* Description    : This function handles I2C1 Event interrupt request.
*******************************************************************************/
void I2C1_EV_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles I2C1 Error interrupt request.
*******************************************************************************/
void I2C1_ER_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles I2C2 Event interrupt request.
*******************************************************************************/
void I2C2_EV_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles I2C2 Error interrupt request.
*******************************************************************************/
void I2C2_ER_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles SPI1 global interrupt request.
*******************************************************************************/
void SPI1_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles SPI2 global interrupt request.
*******************************************************************************/
void SPI2_IRQHandler(void)
{
 
}
/*******************************************************************************
* Description    : This function handles External lines 15 to 10 interrupt request.
*******************************************************************************/
void EXTI15_10_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles RTC global interrupt request.
*******************************************************************************/
void RTC_IRQHandler(void)
{
}


/*******************************************************************************
* Description    : This function handles USB WakeUp interrupt request.
*******************************************************************************/
void USBWakeUp_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM8 Break interrupt request.
*******************************************************************************/
void TIM8_BRK_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM8 overflow and update interrupt 
*                  request.
*******************************************************************************/
void TIM8_UP_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM8 Trigger and commutation interrupts 
*                  requests.
*******************************************************************************/
void TIM8_TRG_COM_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM8 capture compare interrupt request.
*******************************************************************************/
void TIM8_CC_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles ADC3 global interrupt request.
*******************************************************************************/
void ADC3_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles FSMC global interrupt request.
*******************************************************************************/
void FSMC_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles SDIO global interrupt request.
*******************************************************************************/
void SDIO_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM5 global interrupt request.
*******************************************************************************/
void TIM5_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles SPI3 global interrupt request.
*******************************************************************************/
void SPI3_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles UART4 global interrupt request.
*******************************************************************************/
void UART4_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles UART5 global interrupt request.
*******************************************************************************/
void UART5_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM6 global interrupt request.
*******************************************************************************/
void TIM6_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles TIM7 global interrupt request.
*******************************************************************************/
void TIM7_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA2 Channel 1 interrupt request.
*******************************************************************************/
void DMA2_Channel1_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA2 Channel 2 interrupt request.
*******************************************************************************/
void DMA2_Channel2_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA2 Channel 3 interrupt request.
*******************************************************************************/
void DMA2_Channel3_IRQHandler(void)
{
}

/*******************************************************************************
* Description    : This function handles DMA2 Channel 4 and DMA2 Channel 5
*                  interrupt request.
*******************************************************************************/
void DMA2_Channel4_5_IRQHandler(void)
{
}


/*******************************************************************************
* Description    : This function handles RTC Alarm interrupt request.
*******************************************************************************/
void RTCAlarm_IRQHandler(void)
{
 
}
void ETH_IRQHandler(void)
{
}

