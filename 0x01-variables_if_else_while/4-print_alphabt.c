#include <stdio.h>

/**
 * main - Entry of the program
 * Printing characters except q and e
 * Return:0
 */

int main(void)

{

char character;

for (character = 'a' ; character <= 'z' ; character++)
{
	if (character != 'q' && character != 'e')
		putchar(character);
}
putchar('\n');
return (0);
}
