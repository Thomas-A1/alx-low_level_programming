#include <stdio.h>

/**
 * main- Entry of the program
 * Printing all combinations of two two-digit numbers
 * Return:0
 */

int main(void)
{
	int m, t;

	for (m = 0; m < 100; m++)
	{
		for (t = 0; t < 100; t++)
		{
			if (t > m)
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar(' ');
				putchar((t / 10) + '0');
				putchar((t % 10) + '0');

				if (m != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}		
