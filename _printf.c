#include "main.h"

/**
 * _printf - prints formatted data to stdout
 * @format:character string
 * Return: number of characters written
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, r = 0;
	int (*fn)(va_list);
	va_list args;

	if (format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
		        fn = get_func(&format[++i]);
			if (fn)
			{
				r = fn(args);
				i++;
			}
			else if (format[1] != ' ' && format[i])
				r = _putchar(format[i - 1])
			else
			{
				va_end(args);
				return (-1);
			}
		}
		else
			r = _putchar(format[i++]);
		if (r > 0)
			j += r;
	}
	va_end(args);
	return (j);
}
