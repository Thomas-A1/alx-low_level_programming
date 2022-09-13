#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @p: passing a character as a parameter
 * Return: 1 if character is an alphabet
 */

int _isalpha(int p)
{
	if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z'))
		return (1);
	return (0);
}
