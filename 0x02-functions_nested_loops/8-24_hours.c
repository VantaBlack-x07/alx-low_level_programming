#include "main.h"

/**
* jack_bauer - function that prints every minute of the
* day of Jack Bauer, starting from 00:00 to 23:59.
*
* Return: Nothing
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
{
		for (minute = 0; minute < 60; minute++)
{
			int hour_tens = hour / 10;
			int hour_ones = hour % 10;
			int minute_tens = minute / 10;
			int minute_ones = minute % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_ones + '0');
			_putchar(':');
			_putchar(minute_tens + '0');
			_putchar(minute_ones + '0');
			_putchar('\n');
		}
	}
}
