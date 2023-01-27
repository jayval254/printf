#include "main.h"
/**
 * print_percent - prints character % to stdout
 * @args: parameters
 *  Return: characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
