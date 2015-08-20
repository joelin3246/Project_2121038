
//#include "stm32f0xx.h"
#include "ht1650.h"
#include "ht1621.h"

/*============================================================================
* Function	: F_SetDisplayRam
* Description	: ?? LCD RAM ? 0 or 1
* Input 		: uInt8 => SetClear is ????  0:0x00 1=0xFF
* Return Value : void
=============================================================================*/
void F_SetDisplayRam(rt_uint8_t SetClear)
{
	F_Ht1621SetDisplayRam(SetClear);
	F_Ht165xSetDisplayRam(SetClear);
}
/*============================================================================
* Function	: F_Display
* Description	: ?RAM???Driver
* Input 		: void
* Return Value : void
=============================================================================*/
void F_Display(void)
{
	F_Ht1621Display();
	F_Ht165XDisplay();
}

