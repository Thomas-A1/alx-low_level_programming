#include <stdio.h>

/**
 * main - Points all arguments it receives
 * @argc: Number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
i}
