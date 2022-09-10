#include <stdio.h>

/**
 * main - entry block
 * Description: Printingnumbers of base 16 in lowercase
 * Return:0 
 */

int main(void)
{
	int h = '0';
	int a_to_f = 'a';

	while (h <= '9')		
	{
		putchar(h);
		h++;
	}
	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	return (0);
}
