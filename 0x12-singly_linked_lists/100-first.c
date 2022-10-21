#include "lists.h"
#include <stdio.h>

/**
 * before_main - Prints before main
 *
 *
 *
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("Tough to code in C\n");
	printf("Yet I will not quit\n");
}
