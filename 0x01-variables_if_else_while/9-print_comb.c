#include <stdio.h>

/**
 * main -Entry of the program
 * Printing possible combinationsf single-digit numbers
 * Return:0
 */

int main(void)

{
	int digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
		putchar('\n');
		return (0);
}
