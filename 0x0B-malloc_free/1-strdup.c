#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: NULL if fail
 */
char *strdup(char *str)
{
	char *cp;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cp[i] = str[i];
	cp[len] = '\0';
	return (cp);
}
