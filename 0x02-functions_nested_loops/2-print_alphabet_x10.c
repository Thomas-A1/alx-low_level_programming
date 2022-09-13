#include "main.h"

/**
 * print_alphabet_x10 - 10 times Alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char t, i;

	for (i = 0; i <= 9; i++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
