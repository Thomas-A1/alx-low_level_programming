#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments passed to the function
 * @argv: argument vector of pointers to a string
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
