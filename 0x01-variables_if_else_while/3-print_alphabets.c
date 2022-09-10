#include <stdio.h>

/**
 * main - Entry of the program
 * Printing both lowercase and uppercase characters
 * Return : 0
 */

int main(void)
{
	char character;
	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	putchar('\n');
	
	for (character = 'A'; character <= 'Z'; character++)
		putchar(character);
	putchar('\n');
	return (0);

}
