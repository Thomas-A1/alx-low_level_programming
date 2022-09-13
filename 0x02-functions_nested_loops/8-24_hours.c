#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day of jack
 * n from 00:00 to 23:59, min loop counts min, while hour loop counts hours
 * and rests minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_left;
	int minutes_left;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_left = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_left + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_left + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
