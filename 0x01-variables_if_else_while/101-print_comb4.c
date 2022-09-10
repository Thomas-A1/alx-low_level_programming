#include <stdio.h>

/**
 * main - Entry of the program
 * Prints all differnt combinations of three digits
 * Return:0
 */

int main(void)
{
	int a, b, c;
	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
			
					if (a != 7))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}


				
