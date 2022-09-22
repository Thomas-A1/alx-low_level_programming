#include "main.h"

/**
 * reverse_array - Reverses arrays of integers
 * @a: Array
 * @n: Number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
