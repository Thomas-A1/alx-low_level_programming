#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be compared with
 * Return: pointer to byte in s or null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
