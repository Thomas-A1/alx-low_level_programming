#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String passed as a paramter
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
