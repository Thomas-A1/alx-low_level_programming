#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int dimension1, dimension2;

	if (size > 0)
	{
		for (dimension1 = 0; dimension1 < size; dimension1++)
		{
			for (dimension2 = 0; dimension2 < (size -1); dimension2++)
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
