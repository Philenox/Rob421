/*
  Servo.h - Interrupt driven Servo library for Arduino using 16 bit timers- Version 2
  Copyright (c) 2009 Michael Margolis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#ifndef UT390B_h
#define UT390B_h

#include <stdint.h>
class UT390B
{
public:
  UT390B(void);
  int setup(uint8_t txPin, uint8_t rxPin, uint8_t triggerPin);
  int setTx(uint8_t txPin);
  int getTx(void);
  int setRx(uint8_t a);
  int getRx(void);
  int read();                        // returns current distance
private:
   uint32_t distance;
   uint8_t pinTx;
   uint8_t pinRx;
   uint8_t pinTrigger;
};

#endif
