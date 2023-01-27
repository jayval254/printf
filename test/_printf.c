#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			i++;
			switch (format[i]) {
				case 'c': {
						  char value = va_arg(args, int);
						   printf("%c", value);
						   break;
					  }
				case 's': {
						  char* value = va_arg(args, char*);
						  printf("%s", value);
						  break;
					  }
				case '%': {
						  char value = va_arg(args, char);
						  printf("%%", value);
						  break;
					  }
				case 'd': {
						  int value = va_arg(args, int);
						  printf("%d", value);
						  break;
					  }
				case 'i': {
						  int value = va_arg(args, int);
						  printf("%i", value);
						  break;
					  }
				default:
					  putchar(format[i]);
					  break;
			}
		} else {
			putchar(format[i]);
		}
	}
	va_end(args);
}

