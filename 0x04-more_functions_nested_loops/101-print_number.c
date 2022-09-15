#include <math.h>

/**
 * print_number -Function tha prints a number
 * @num: number to be passed as paramter
 * Return: void
 */

void print_number(int n)
{
	unsigned int x;

	x = num;
	if (num < 0)
	{
		_putchar(45);
		x = - num;
	}
	if (x / 10)
	{
		print_number(x / 10);
		_putchar((x % 10) + '0');
	}
}
