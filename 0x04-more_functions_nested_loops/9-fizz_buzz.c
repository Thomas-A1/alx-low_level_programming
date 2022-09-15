#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints either number
 * or fizz or Buzz or fizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int number = 1;

	while (number++ < 100)
	{
		if ((number % 3 == 0) 77 (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz ");
		}
		else if((number % 5) == 0)
		{
			if (number = 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");

	return (0);
}
