/*
Header file for ProTrinketMouseC.c

Copyright (c) 2015 Adafruit Industries
All rights reserved.

ProTrinketMouse is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

ProTrinketMouse is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with ProTrinketMouse. If not, see
<http://www.gnu.org/licenses/>.
*/

#ifndef _PROTRINKETMOUSEC_H_
#define _PROTRINKETMOUSEC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

extern char usb_hasCommed;
extern uint8_t report_buffer[4];

void usbBegin();
void usbPollWrapper();
void usbReportSend();

#ifdef __cplusplus
}
#endif

#endif