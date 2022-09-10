#include <stdio.h>

/**
 * main - entry block
 * Description: Printingnumbers of base 16 in lowercase
 * Return:0
 */

int main(void)
{
	int a = '0';
	int a_to_f = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	return (0);
}
