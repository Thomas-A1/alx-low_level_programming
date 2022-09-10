#include <stdio.h>

/**
 * main - Entry of the program
 * Printing numbers of base 16 in lowercase
 * Return:0
 */

int main(void)
{

int hex = '0';
int a_to_f = 'a';

while (hex <= '9')
{
	putchar(hex);
	hex++;	
}
while (a_to_f <= 'f')
{
	putchar(a_to_f);
	a_to_f++;
}
putchar('\n');
return (0);

}
