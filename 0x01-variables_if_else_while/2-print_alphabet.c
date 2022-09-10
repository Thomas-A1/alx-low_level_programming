#include <stdio.h>

/**
 * main - Entry of the program
 * A program that prints lowercase characters
 * Return:0
 */
int main(void)

{
char q;

for (q = 'a'; q <= 'z'; q++)
	putchar(q);
putchar('\n');
return (0);

}
