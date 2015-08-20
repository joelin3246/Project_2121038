/*
 * File      : ht1625.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 
 */
 
#include <rthw.h>

#define C_Ht1621RamSize 				32/2

extern void F_Ht1621SetDisplayRam(rt_uint8_t SetClear);

extern void F_Ht1621Display(void);

extern rt_uint8_t Ht1621Buffer[C_Ht1621RamSize];
