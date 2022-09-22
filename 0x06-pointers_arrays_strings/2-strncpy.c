#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination to be passed
 * @src: input
 * @n: Number of characters
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
