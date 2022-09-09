#include <stdio.h>

/**
 * Main function is the entry point
 * Printing out the sizes of data types
 * Returns: 0
 */

int main(void)
{
	int number;
	long long int integer;
	char character;
	float decimal;
	long int number2;
	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(number));
	printf("Size of a long int: %ld byte(s)\n," sizeof(number2));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return(0);

}

