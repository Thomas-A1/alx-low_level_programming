#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @num: paramter passed to be used
 * Return: the factorial of the number
 */

int factorial(int num)
{
	int next;

	if (num <= 0)
		return (1);
	else
		return num * factorial(num -1);
}
