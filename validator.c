#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * validator - Function that produces output according to a format.
 * @format: Pointer
 * @print1: va_list
 * @ops1: struct
 * Return: 0 on success
 */
int validator(const char *format, va_list print, MyPrint *ops)
{
	int i = 0, j = 0, printed_chars = 0, number = 13;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == ' ')
			{
				while (format[i + 1] == ' ')
					i++;
			}
			while (j < number)
			{
				if (ops[j].op[0] == format[i + 1])
				{
					printed_chars += ops[j].f(print);
					i++;
					break;
				} j++;
			}
			if (j == number)
				printed_chars += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			printed_chars += _putchar('%');
			i++;
		}
		else
			printed_chars += _putchar(format[i]);
		i++, j = 0;
	}
	return (printed_chars);
}
