#include "main.h"

/**
 * print_sign - function to check the sign of a number
 * @num - The number passed in as a parameter
 * Return: 1 if its positive, -1 if negative
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

