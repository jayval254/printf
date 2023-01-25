#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: format
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	MyPrint ops[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{NULL, NULL}
	};
	va_list print;
	if (format == NULL)
		return (-1);
	va_start(print, format);
	printed_chars = validator(format, print, ops);
	va_end(print);
	return (printed_chars);
}
