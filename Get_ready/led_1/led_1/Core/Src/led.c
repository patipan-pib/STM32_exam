/*
 * led.c
 *
 *  Created on: Feb 25, 2025
 *      Author: Admin
 */

#include "led.h"

void ToggleLED(uint16_t pin, GPIO_TypeDef* port, uint32_t delay_ms)
{
    // เปิด LED (สำหรับบางบอร์ดอาจเป็น active low)
    HAL_GPIO_WritePin(port, pin, GPIO_PIN_SET);
    HAL_Delay(delay_ms);

    // ปิด LED
    HAL_GPIO_WritePin(port, pin, GPIO_PIN_RESET);
    HAL_Delay(delay_ms);
}

