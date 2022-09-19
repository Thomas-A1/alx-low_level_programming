#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
