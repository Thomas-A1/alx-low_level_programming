#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @t: letter passed in as parameter
 * Return: 1 if the character is a lowercase
 */

int _islower(int t)
{
	if (t > 96 && t < 125)
	{
		return (1);
	}
	return (0);
}
