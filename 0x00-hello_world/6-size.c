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
	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(number));
	printf("Size of a long int: %lu byte(s)\n," sizeof(number2));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a float: %lu byte(s)\n", sizeof(decimal));
	return(0);

}

