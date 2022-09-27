nclude "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to passed as parameter
 * @accept: String to be compared with
 * Return: number of bytes of s in accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (i);
}
