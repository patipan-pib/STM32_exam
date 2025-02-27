/*
 * led.h
 *
 *  Created on: Feb 25, 2025
 *      Author: Admin
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"

void ToggleLED(uint16_t pin, GPIO_TypeDef* port, uint32_t delay_ms);

#endif /* INC_LED_H_ */
