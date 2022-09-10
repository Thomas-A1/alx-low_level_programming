#include <stdio.h>

/**
 * main -Entry of the program
 * Printing lowercase characters in reverse
 * Return:0
 */

int main(void)

{
char character;
for (character = 'z' ; character >= 'a'; character--)
	putchar(character);
putchar('\n');
return (0);
}
