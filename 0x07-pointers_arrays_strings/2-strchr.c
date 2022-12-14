#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: string to check
 * @c: character to inspect
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
