#include "main.h"

/**
 * main - Printing putchar
 * Return: Always 0
 */

int main(void)
{
	char array[] = "_putchar";
	int character;

	for (character = 0; character < sizeof(char); character++)
		_putchar(array[character]);
	_putchar('\n');

	return (0);
}
