#include "main.h"

/**
 * leet - encode into 1337
 * @n: input
 * Return: value of n
 */

char *leet(char *n)
{
	int i, j;
	char A[] = "aAeEoOtTlL";
	char B[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == A[j])
			{
				n[i] = B[j];
			}
		}
	}
	return (n);
}