#include <Arduino.h>
#include "UT390B.h"


UT390B::UT390B(void)
{
	distance = 0;
	pinTx = 0;
	pinRx = 0;
	pinTrigger = 0;
}

int UT390B::setTx(uint8_t a)
{
	return a;
}

int UT390B::getTx()
{
	return 0;
}

int UT390B::setRx(uint8_t a)
{
	return a;
}

int UT390B::getRx()
{
	return 0;
}

int UT390B::read()
{
	return 0;
}


