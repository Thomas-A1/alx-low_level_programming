#include <stdio.h>
#include "main.h"

/**
 * main - Entry of program
 * Computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	unsigned long int sum_of_3, sum_of_5, sum;
	int num;

	sum_of_3 = 0;
	sum_of_5 = 0;
	sum = 0;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3) == 0)
		{
			sum_of_3 = sum_of_3 + num;
		}
		else if ((num % 5) == 0)
		{
			sum_of_5 = sum_of_5 + num;
		}
	}
	sum = sum_of_3 + sum_of_5;
	printf("%lu\n", sum);
	return (0);
}
