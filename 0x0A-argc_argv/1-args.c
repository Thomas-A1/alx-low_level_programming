#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argv: Number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
