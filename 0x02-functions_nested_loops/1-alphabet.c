#include "main.h"

/**
 * Main: Entry program
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
