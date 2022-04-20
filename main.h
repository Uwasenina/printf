#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct print_method - structure containing specifiers
 * and corresponding print functions
 * @t: the location and method to translatr data to char
 * @fn: print function for specific type
 */
typedef struct print_method
{
	char *t;
	int (*fn)(va_list);
} print_t;

int _abs(int n);
int _putchar(char c);
int _puts(char *s);
int count_digits(int n);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int _print_number(int n);
int print_binary(char *format, va_list);
int print_octal(char *format, va_list);
int print_hexlower(char *format, va_list);
int print_hexupper(char *format, va_list);
int _print_unsign(unsigned int n);
int print_unsign(char *format, va_list);
int print_unprintable(char *format, va_list);
int print_pointer(char *format, va_list);
int print_reverse(char *format, va_list);
int  _print_rot13(char *s);
int print_rot13(char *format, va_list);

int (*get_print(const char *format))(va_list);
int _printf(const char *format, ...);

#endif
