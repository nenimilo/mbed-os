/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "pinmap.h"
#include "mbed_error.h"


void pin_function(PinName pin, int function) {
}

void pin_mode(PinName pin, PinMode mode) {
    if (pin == (PinName)NC) { return; }
    /*
    uint32_t pin_number = (uint32_t)pin;
		
    uint32_t drain = (uint32_t) mode;  //((uint32_t) mode & (uint32_t) OpenDrain) >> 2;
    __IO uint32_t *reg;
		
    if(pin_number <= 15) {
    	reg = (__IO uint32_t*)(CMSDK_GPIO0_BASE + 0x4 + pin_number);
    } else if (pin_number > 15 && pin_number <= 31) {
    	reg = (__IO uint32_t*)(CMSDK_GPIO1_BASE + 0x4 + (pin_number - 16));
    }
		
    uint32_t tmp = *reg;
    
    // pin mode bits: [4:3] -> 11000 = (0x3 << 3)
    tmp &= ~(0x3 << 3);
    tmp |= (mode & 0x3) << 3;
    
    // drain
    tmp &= ~(0x1 << 10);
    tmp |= drain << 10;
    
    *reg = tmp;*/
}
