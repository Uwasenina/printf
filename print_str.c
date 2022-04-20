#include "main.h"

/**
 * print_str - prints a string
 * @args: argument
 * Return: the number ogf printed character
 */
int print_str(va_list args)
{
	int n = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null";

	while (*str && _putchar(*str++) != -1)
		n++;

	return (n);
}
