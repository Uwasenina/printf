#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct func_type - structure containing specifiers
 * and corresponding print functions
 * @t: the location and method to translatr data to char
 * @f: print function for specific type
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);

#endif
