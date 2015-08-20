
#include "stm32f0xx.h"
#include "ht1621.h"

#define P_HT162XCS_PIN                  GPIO_Pin_5                              
#define P_HT162XCS_GPIO_PORT            GPIOA
#define P_HT162XCS_GPIO_CLK             RCC_AHBPeriph_GPIOA

#define P_HT162XWR_PIN                  GPIO_Pin_6                             
#define P_HT162XWR_GPIO_PORT            GPIOA
#define P_HT162XWR_GPIO_CLK             RCC_AHBPeriph_GPIOA

#define P_HT162XDB0_PIN                	GPIO_Pin_7                              
#define P_HT162XDB0_GPIO_PORT         	GPIOB
#define P_HT162XDB0_GPIO_CLK						RCC_AHBPeriph_GPIOB

/* LCDBuffer size */



/* Private typedef ----------------------------------------------------------*/
/* Private define -----------------------------------------------------------*/
//;;------------------------------------------------------------------
//;;HT1621???
//;;------------------------------------------------------------------
#define C_16_READ       0xc0		//%11000000
#define C_16_WRITE      0xa0		//%10100000
#define C_16_CMD        0x80		//%10000000
//;;------------------------------------------------------------------
//;;HT1621??
//;;------------------------------------------------------------------
#define C_16_SYSDIS     0x00		//%00000000       //; Turn off LCD bias generator
#define C_16_SYSEN      0x01		//%00000001       //; Turn on LCD oscillator
#define C_16_LCDOFF     0x02		//%00000010       //; Turn off LCD
#define C_16_LCDON      0x03		//%00000011       //; Turn on LCD
#define C_16_TIMERDIS   0x04		//%00000100       //; Disable time base output
#define C_16_WDTDIS     0x05		//%00000101       //; Disable WDT time-out flag output
#define C_16_TIMEREN    0x06		//%00000110       //; Enable time base output
#define C_16_WDTEN      0x07		//%00000111       //; Enable WDT time-out flag output
#define C_16_TONEOFF    0x08	// %00001000       //; Turn off tone output
#define C_16_CLRTIMER   0x0d		//%00001101       //; Clear the contents of the time base generator
#define C_16_CLRWDT     0x0f	//%00001111       //; Clear the contents of WDT stage
#define C_16_RC256K     0x18	//%00011000       //; System clock source, on chip RC oscillator
#define C_16_EXT256K    0x1c	//%00011100       //; System clock source,external clock source

#define C_16_TONE4K     0x40	//%01000000       //; Tone frequency output:4KHz
#define C_16_TONE2K     0x60	//%01100000       //; Tone frequency output:2KHz
#define C_16_IRQDIS     0x80	//%10000000       //; Disable IRQ output
#define C_16_IRQEN      0x88	//%10001000       //; Enable IRQ output
#define C_16_F1         0xa0	//%10100000       //; TimeBase clock output:1Hz,WDT 4s
#define C_16_F2         0xa1	//%10100001       //; TimeBase clock output:2Hz,WDT 2s
#define C_16_F4         0xa2	// %10100010       //; TimeBase clock output:4Hz,WDT 1s
#define C_16_F8         0xa3	//%10100011       //; TimeBase clock output:8Hz,WDT 1/2s
#define C_16_F16        0xa4	//%10100100       //; TimeBase clock output:16Hz,WDT 1/4s
#define C_16_F32        0xa5	//%10100101       //; TimeBase clock output:32Hz,WDT 1/8s
#define C_16_F64        0xa6	//%10100110       //; TimeBase clock output:64Hz,WDT 1/16s
#define C_16_F128       0xa7	//%10100111       //; TimeBase clock output:128Hz,WDT 1/32s
#define C_16_TEST       0xa0	//%10100000       //; Test mode ,user don't use
#define C_16_NORMAL     0xe3	//%11100011       //; Normal Mode


//-----------------------------
//c=0: 1/2 bias option
//c=1: 1/3 bias option
//ab=00: 2 commons option
//ab=01: 3 commons option
//ab=10: 4 commons option
// 0010abXc
//-----------------------------
#define C_16_COM4     0x28	//%00101000       //; COM(4) BIAS(1/2)

/* Private macro ------------------------------------------------------------*/
/* Private variables --------------------------------------------------------*/
rt_uint8_t Ht1621Buffer[C_Ht1621RamSize];

static void F_EEDelay(volatile rt_uint32_t us)
{
	
    while(us>1)
    {
      us--;
    }
    us=0;	

    //rt_uint32_t delta;
    /* 獲得延時經過 tick 數 */
    //us = us                                                                                                             * (SysTick->LOAD/(1000000/RT_TICK_PER_SECOND));
    /* 獲得當前的時間 */
    //delta = SysTick->VAL;
    /* 循環獲得當前的時間，直到達到指定的時間後退出循環 */
   // while (delta - SysTick->VAL< us);
}
/*============================================================================
* Function	: F_162XCS
* Description	: CS pin ?? 
* Input 		: uInt8 => data is hight or low
* Return Value : void
=============================================================================*/
void	F_162XCS(rt_uint8_t data)
{	
  if(data)
    P_HT162XCS_GPIO_PORT->BRR = P_HT162XCS_PIN;
  else
    P_HT162XCS_GPIO_PORT->BSRR = P_HT162XCS_PIN;
}
/*============================================================================
* Function	: F_162XWR
* Description	: WR ??
* Input 		: uInt8 => data is hight or low
* Return Value : void
=============================================================================*/
void	F_162XWR(rt_uint8_t data)
{	
  if(data)
    P_HT162XWR_GPIO_PORT->BRR = P_HT162XWR_PIN;
  else
    P_HT162XWR_GPIO_PORT->BSRR = P_HT162XWR_PIN;
}
/*============================================================================
* Function	: F_162XDB0
* Description	: DATA ??
* Input 		: uInt8 =>data is hight or low
* Return Value : void
=============================================================================*/
void	F_162XDB0(rt_uint8_t data)
{	
  if(data)
    P_HT162XDB0_GPIO_PORT->BRR = P_HT162XDB0_PIN;
  else
    P_HT162XDB0_GPIO_PORT->BSRR = P_HT162XDB0_PIN;
}

/*============================================================================
* Function	: F_HT162XWrite
* Description	: DATA ??
* Input 		: uInt8 =>data is hight or low
* Return Value : void
=============================================================================*/
void F_HT162XWrite(rt_uint8_t cmdbyte,rt_uint8_t sendbits)
{
  while(sendbits != 0)
	{
		F_EEDelay(2);
		F_162XWR(0);
		F_EEDelay(2);
		if(cmdbyte&0x80){
			F_162XDB0(1);
		}else{
			F_162XDB0(0);
		}
		F_EEDelay(2);
		F_162XWR(1);
		F_EEDelay(2);
		cmdbyte <<= 1;
		sendbits --;
	};
}

/*
void F_HT162XWrite(rt_uint8_t cmdbyte,rt_uint8_t sendbits)
{
  while(sendbits != 0)
	{
		F_EEDelay(2);
		F_162XWR(0);
		F_EEDelay(3);
		if(cmdbyte&0x80){
			F_162XDB0(1);
		}else{
			F_162XDB0(0);
		}
		F_EEDelay(5);
		F_162XWR(1);
		F_EEDelay(3);
		cmdbyte <<= 1;
		sendbits --;
	};
}
*/
/*============================================================================
* Function	: F_HT162XInitial
* Description	: ???
* Input 		: void
* Return Value : void
=============================================================================*/
void F_HT162XInitial(void)
{
	F_162XCS(0);
	F_HT162XWrite(C_16_CMD,3);			// ID
	F_HT162XWrite(C_16_RC256K,9);		// Set RC 256K
	F_EEDelay(2);
	F_162XCS(1);
	F_EEDelay(4);
	//--------
  //F_162XCS(0);
	F_HT162XWrite(C_16_CMD,3);			// ID
	F_HT162XWrite(C_16_SYSEN,9);		// Set
	//F_EEDelay(2);
	//F_162XCS(1);
	F_EEDelay(4);
	//--------
	//F_162XCS(0);
	F_HT162XWrite(C_16_CMD,3);			// ID
	F_HT162XWrite(C_16_LCDON,9);		// Set
	//F_EEDelay(2);
	//F_162XCS(1);
	F_EEDelay(4);
	//--------
	//F_162XCS(0);
	F_HT162XWrite(C_16_CMD,3);			// ID
	F_HT162XWrite(C_16_F64,9);		// Set
	//F_EEDelay(2);
	//F_162XCS(1);
	F_EEDelay(4);
	//--------
	//F_162XCS(0);
	F_HT162XWrite(C_16_CMD,3);			// ID
	F_HT162XWrite(C_16_COM4,9);		// Set
	//F_EEDelay(2);
	//F_162XCS(1);
	F_EEDelay(4);
	//--------
	F_162XWR(1);
	F_162XDB0(1);
	F_EEDelay(2);
}

/*============================================================================
* Function	: F_Ht1621SetDisplayRam
* Description	: ?? LCD RAM ? 0 or 1
* Input 		: uInt8 => SetClear is ????  0:0x00 1=0xFF
* Return Value : void
=============================================================================*/
void F_Ht1621SetDisplayRam(rt_uint8_t SetClear)
{
  rt_uint8_t i;
  if(SetClear){
    for(i = 0;i < C_Ht1621RamSize;i++)
	    Ht1621Buffer[i] = 0xff;
  }else{
    for(i = 0;i < C_Ht1621RamSize;i++)
	    Ht1621Buffer[i] = 0;
  }
}
/*============================================================================
* Function	: F_Ht1621Display
* Description	: ?RAM???Driver
* Input 		: void
* Return Value : void
=============================================================================*/
void F_Ht1621Display(void)
{
  rt_uint8_t i;
  
  F_HT162XInitial();	// 設定訊號
	
  F_162XCS(0);
	//------------------------------------------
  F_HT162XWrite(C_16_WRITE,3);			// ID
	F_HT162XWrite(0,6);							// Address
	for(i=0;i<C_Ht1621RamSize;i++){
		//F_HT162XWrite(Ht1621Buffer[i],8);	// Data
		F_HT162XWrite(0xFF,8);	// Data
	}
	//------------------------------------------
	F_162XCS(1);
  F_162XWR(1);
  F_162XDB0(1);
}
/*============================================================================
* Function	: F_InitialLCD_GPIO
* Description	: This routine will setup the LCD Pin
* Input 		: void
* Return Value : void
=============================================================================*/
int F_InitialHT162x_GPIO(void)
{

  GPIO_InitTypeDef GPIO_InitStructure;
  
  // Output 162X 
  // Enable the P_HT162XCS_PIN 
  RCC_AHBPeriphClockCmd(P_HT162XCS_GPIO_CLK, ENABLE);
  // Configure the P_HT162XCS_PIN  pin
  GPIO_InitStructure.GPIO_Pin = P_HT162XCS_PIN ;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(P_HT162XCS_GPIO_PORT, &GPIO_InitStructure);
  
  // Enable the P_HT162XWR_PIN
  RCC_AHBPeriphClockCmd(P_HT162XWR_GPIO_CLK, ENABLE);
  // Configure the P_HT162XWR_PIN  pin
  GPIO_InitStructure.GPIO_Pin = P_HT162XWR_PIN ;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(P_HT162XWR_GPIO_PORT, &GPIO_InitStructure);
  
  // Enable the P_HT162XDBX_PIN
  RCC_AHBPeriphClockCmd(P_HT162XDB0_GPIO_CLK, ENABLE);
  // Configure the P_HT165XDBX_PIN  pin 
  GPIO_InitStructure.GPIO_Pin = P_HT162XDB0_PIN ;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(P_HT162XDB0_GPIO_PORT, &GPIO_InitStructure);
	
	return 0;
}

INIT_DEVICE_EXPORT(F_InitialHT162x_GPIO);
