#include "3-calc.h"

/**
 * op_add - return the sum of two numbers
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return difference of two numbers
 * @a: int parameter
 * @b: int parameter
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the product of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the quotient of two numbers
 * @a: int parameter
 * @b: int parameter
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return the remainder of a division
 * @a: int parameter
 * @b: int parameter
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
