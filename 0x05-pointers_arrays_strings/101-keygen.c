#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random generator for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int a, b, d, e;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (e != 2772)
	{
		a = d = e = 0;
		while ((2772 - 122) > e)
		{
			b = rand() % 62;
			p[a] = c[b];
			e += c[b];
			a++;
		}
		while (c[d])
		{
			if (c[d] == (2772 - e))
			{
				p[a] = c[d];
				e += c[d];
				a++;
				break;
			}
			d++;
		}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
}
