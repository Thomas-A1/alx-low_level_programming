#include <stdio.h>

/**
 * main - Entry of the program
 * Prints all differnt combinations of three digits
 * Return:0
 */

int main(void)
{
	int a, b, c;
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = 0; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
			
					if (b != '8' || (b = '8' && c != '9'))
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


				
