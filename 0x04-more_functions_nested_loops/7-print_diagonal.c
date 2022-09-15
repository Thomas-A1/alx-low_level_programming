#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that prints a diagonal
 * @number: parameter passed into function
 * Return: void
 */

void print_diagonal(int number)
{
	int length, space;

	if (number > 0)
	{
		for (length = 0; length < number; length++)
		{
			for (space = 0; space < length; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == (number - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
