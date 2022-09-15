#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int dimen1; dimen2;

	if (size > 0)
	{
		for (dimen1 = 0; dimen1 < size; dimen1++)
		{
			for (dimen2 = 0; dimen2 < (size - 1); dimen2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
