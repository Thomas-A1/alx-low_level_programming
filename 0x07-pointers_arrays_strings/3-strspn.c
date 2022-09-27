nclude "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to passed as parameter
 * @accept: String to be compared with
 * Return: number of bytes of s in accept string
 */

unsigned int_strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
