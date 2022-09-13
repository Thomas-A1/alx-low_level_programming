#include "main.h"

/**
 * print_times_table - prints time table of n
 * @num: Take integer as a parameter
 * Return: void
 */

void print_times_table(int num)
{
	int product, mult, number;

	if(num <= 15 && num >= 0)
	{
		for (number = 0; number <= num; ++number)
		{
			_putchar(48);
			for (mult = 1; mult <= num; ++ mult)
			{
				_putchar(',');
				_putchar(',');

				product = number * mult;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 +48);
				}
				else if (product <= 99 && product >= 10)
					_putchar((product % 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
