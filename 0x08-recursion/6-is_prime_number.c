#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime
 * @num: number passed as paramter
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int num)
{
	int s = num / 2;

	if (num <= 1)
		return (0);
	return (is_prime(num, s));
}

/**
 * is_prime - returns1 if n is prime
 * @n: number passed as paramter
 * Return: 1 or 0 if otherwise
 */
int is_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_prime(n, s - 1));
}
