#include "main.h"

/**
 * print_diagsums - Prints the sum of the twok diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of the matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int e, b, c, l = 0, r = 0;

	for (e = 0; e < size; e++)
	{
		c = (e * size) + e;
		l += *(e + c);
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - l - b);
		r += *(e + c);
	}
	printf("%a, %e\n", l, r);
}

