#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name
 * @argc: Arguments that contains input
 * @argv: Argument that stores the strings in an array of char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, m;

	if (arg != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		m = num1 * num2;
		printf("%d\n", m);
	}
	return (0);
}
