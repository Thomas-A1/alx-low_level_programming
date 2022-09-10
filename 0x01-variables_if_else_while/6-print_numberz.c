#include <stdio.h>

/**
 * main - Entry of my program
 * Printing all single digits of base 10
 * Return:0
 */

int main(void)

{

int number;
for (number = '0'; number <= '9'; number++)
	putchar(number);
putchar('\n');
return (0);
}
