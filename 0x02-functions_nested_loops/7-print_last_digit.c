#include "main.h"

/**
 * print_last_digit -Prints the last digit of a number
 * @num: The integer passed as a parameter
 * Return: Last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
