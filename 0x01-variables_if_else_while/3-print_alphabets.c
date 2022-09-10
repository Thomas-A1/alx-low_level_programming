#include <stdio.h>

/**
 * main - Entry of the program
 * Printing both lowercase and uppercase characters
 * Return:0
 */

int main(void)
{
	char character;
	char Character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	
	for (Character = 'A'; Character <= 'Z'; Character++)
		putchar(Character);
	putchar('\n');
	return (0);

}
