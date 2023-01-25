#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
int _printf(const char *format, ...);
/**
 * struct format - Data type of a format
 * @op: Format.
 * @f: Function
 */
typedef struct format
{
	char *op;
	int (*f)(va_list print);
	
} MyPrint;
int _putchar(char c);
int op_char(va_list form);
int op_string(va_list form);
int op_percent(va_list form);
int validator(const char *format, va_list print1, MyPrint *ops1);
#endif
