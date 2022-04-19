#include "main.h"

/**
 * _printf - prints formatted data to stdout
 * @format:character string
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int i = 0, (*printf_fn)(char *, va_list);
	char specifier[3];
	va_list args;

	if (format == NULL)
		return (-1);
	specifier[2] = '\0';
	va_start(args, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			print_fn = get_print_fn(format);
			if (print_fn)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				i += print_fn(specifier, args);
			}
			else if (format[1] != '\0')
			{
				i += _putchar('%');
				i += _putchar(format[1]);
			}
			else
			{
				i += _putchar('%);
				break;
			}
			format += 2;
		}
	else
	{
		i += _putchar(format[0]);
		format++;
	}
	}
	_puchar(-2);
	return (i);
}
