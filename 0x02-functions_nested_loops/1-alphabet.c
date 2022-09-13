#include "main.h"

/**
 * print_alphabet - function to print characters
 * Alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');
}
