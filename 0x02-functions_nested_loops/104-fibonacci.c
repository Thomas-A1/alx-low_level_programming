#include "main.h"
#include <stdio.h>

/**
 * main - Prints 98 fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, k, t1, t2, q1, q2;
	j = 1;
	k = 2;

	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	t1 = j / 1000000000;
	t2 = j % 1000000000;
	q1 = k / 1000000000;
	q2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", q1 + (q2 / 1000000000));
		printf("%lu", q2 % 1000000000);
		q1 = q1 + t1;
		t1 = q1 - t1;
		q2 = q2 + t2;
		t2 = q2 - t2;
	}
	printf("\n");
	return (0);
}
