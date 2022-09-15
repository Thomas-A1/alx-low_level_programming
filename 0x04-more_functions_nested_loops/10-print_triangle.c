#include <studio.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: limit of triangke
 * Return: void
 */

void print_triangle(int size)
{
if (size <= 0)
{
	putchar('\n');
}
else
{
	int i, j;

	for (i = 1; 1 <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
}
