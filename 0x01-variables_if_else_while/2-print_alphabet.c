#include <stdio.h>

/**
 * main - Entry of the program
 * Description - Printing the lowercase characters
 * Return: 0
 */

int main(void)
{
	char character;
	for (character = 'a'; character <= 'z'; character++)
		putchar(character, "\n");
	return (0);

}
