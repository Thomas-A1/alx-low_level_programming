#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: The character to be printed
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
