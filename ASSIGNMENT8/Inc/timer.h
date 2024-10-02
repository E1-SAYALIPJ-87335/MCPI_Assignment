/*
 * timer.h
 *
 *  Created on: Oct 1, 2024
 *      Author: manish
 */

#ifndef TIMER_H_
#define TIMER_H_

#include"stm32f4xx.h"

#define TCLK      16000000
#define PR        16
#define ARR_Val   100
void PWM_Init(void);

#endif /* TIMER_H_ */
