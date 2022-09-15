#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int dimension1, dimension2;

		for (dimension1 = 0; dimension1 < size; dimension1++)
		{
			for (dimension2 = 0; dimension2 < size; dimension2++)
			{
				putchar('#');
			}
			puthar('\n');
		}
	}
}
