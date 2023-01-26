#ifndef PRINTF
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);
/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_decimal(va_list);

#endif
