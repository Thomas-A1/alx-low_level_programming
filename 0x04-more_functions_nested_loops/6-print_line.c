#include "main.h"
#include <stdio.h>

/**
 * print_line - function prints a straight line
 * @num: parameter passed into function
 * Return: void
 */

void print_line(int num)
{
	while (num-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
