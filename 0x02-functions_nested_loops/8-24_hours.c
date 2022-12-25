#include "main.h"
/**
 *jack_bauer - print jack's long day
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;
	int fDigit;
	int secDigit;
	int mFDigit;
	int mSecDigit;

	while (hour < 24)
	{
	for (min = 0; min < 60; min++)
	{
	if (hour < 10)
	{
	_putchar('0');
	_putchar(hour + '0');
	}
	else
	{
	fDigit = (hour / 10) % 10;
	secDigit = hour % 10;
	_putchar(fDigit + '0');
	_putchar(secDigit + '0');
	}
	_putchar(':');
	if (min < 10)
	{
	_putchar('0');
	_putchar(min + '0');
	}
	else
	{
	mFDigit = (min / 10) % 10;
	mSecDigit = min % 10;
	_putchar(mFDigit  + '0');
	_putchar(mSecDigit + '0');
	}
	_putchar('\n');
	}
	hour++;
	}
}
