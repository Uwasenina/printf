#include "main.h"

/**
 * get_print - check for valid specifier
 * @format: a character to check
 * Return: a pointer to a function
 */
int (*get_print(const char *format))(va_list)
{
	int i;
	print_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"i", print_dec},
		{"d", print_dec},
		{NULL, NULL}
	};
	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
			return (p[i].fn);
	}
	return (NULL);
}
