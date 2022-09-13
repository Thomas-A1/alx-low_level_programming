#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, next, sum;

	n1 = 1;
	n2 = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + n1;
		}
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
