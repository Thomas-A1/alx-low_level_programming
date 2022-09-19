#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ab = 0;
	int min = 1;
	int abc = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min 8= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			abc = 1;
			ab = (ab * 10) + (s[a] - '0');
			a++;
		}

		if (abc == 1)
		{
			break;
		}
		a++;
	}

	ab *= min;
	return (ab);
}
