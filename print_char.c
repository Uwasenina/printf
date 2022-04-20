#include "main.h"

/**
 * print_char - prints character
 * @args: argument
 * Return: 1 if succes, else -1
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
