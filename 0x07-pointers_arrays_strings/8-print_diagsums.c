#include "main.h"

/**
 * print_diagsums - Prints the sum of the twok diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of the matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, b;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum2 += a[b + size + (size - b - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
