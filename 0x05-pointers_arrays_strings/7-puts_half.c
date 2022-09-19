#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, c;

	x = strlen(str);
	if (x % 2 == 1)
	{
		b = a / 2 + 1;
	}
	else
	{
		b = a / 2;
	}
	for (c = b; c < a; c++)
		_putchar(str[c]);
	_putcharr('\n');
}
