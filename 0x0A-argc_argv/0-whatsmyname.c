#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments passed to the function
 * @argv: Argument vector of pointers to the string
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
