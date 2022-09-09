#include <stdio.h>

/**
 * Main function is the entry point
 * Printing out the sizes of data types
 * Returns: 0
 */

int main(void)

{

	int a;

	long long int ll;

	char c;

	float f;

	long int b;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));

	printf("Size of an int: %lu byte(s)\n", sizeof(a));

	printf("Size of a long int: %lu byte(s)\n", sizeof(b));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));

	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);

}
