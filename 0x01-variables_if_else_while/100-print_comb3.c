#include <stdio.h>

/**
 * main - Entry of the program
 * Printing different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= '9'; number1++)
	{
		for (number2 = 0; number2 <= '9'; number2++)
		{
			if (number1 < number2)
			{
				putchar(number1);
				putchar(number2);
				
				if (number1 != '8' || (number1 == '8' && number2 != '9'))
				{
					putchar(',');
					putchar(' ';
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

