#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: character to print
 * Return: Success(1), Error(1)sets
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
