#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 fibonacci number
 * starting with one and two
 * Return: 0
 */

int main(void)
{
	long int n1, n2, n3, next;

	n2 = 1;
	n3 = 2;

	for (n1 = 1; n1 <= 50; ++n1)
	{
		if (n2 != 20365011074)
		{
			printf("%ld, ", n2);
		}
		else
		{
			printf("%ld\n", n2);
		}
		next = n2 + n3;
		n2 = n3;
		n3 = next;
	}
	return (0);
}
