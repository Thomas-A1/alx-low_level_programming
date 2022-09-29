#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @num: paramter passed to be used
 * Return: the factorial of the number
 */

int factorial(int num)
{
	int next;

	if (num < 0)
		return (-1);
	else if (num == 0)
	{
		return (1);
	}
	else
	{
		next = factorial(num - 1);
		return (num * next);
	}
}
