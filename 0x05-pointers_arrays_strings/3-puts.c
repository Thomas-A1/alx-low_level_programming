#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to be printed to stdout
 * Description: Prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

