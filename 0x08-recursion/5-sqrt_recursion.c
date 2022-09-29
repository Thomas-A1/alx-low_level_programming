#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number passed as paramter
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - returns the square root of a number
 * @n: Number to be tested
 * @m: Squared number as paramter
 * Return: the square root of n
 */
int _sqrt(int n, int m)
{
	if (n > m / 2)
		return (-1);
	else if (n * n == m)
		return (n);
	return (_sqrt(n + 1, m));
}
