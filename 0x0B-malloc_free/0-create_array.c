#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars and initializes it with char
 * @size: the size of the array
 * @c: the character to be initialised with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size *sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] - c;
	}
	return (array);
}
