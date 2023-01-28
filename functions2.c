#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * op_rot13 - Print rot13
 * @form: name of va_list.
 * Return: 0 on success
 */
int op_rot13(va_list form)
{
	int lenght = 0;
	int i, j;
	char *s = va_arg(form, char *);

	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 53; j++)
		{
			if (s[i] == x[j])
			{
				lenght += _putchar(y[j]);
				break;
			}
			if (j == 53)
			{
				lenght += _putchar(s[i]);
			}
		}
	}
	return (lenght);
}
/**
 * op_binary - Function that prints the binary representation of a number
 * @form: number to convert to binary
 * Return: binary of number
 */
int op_binary(va_list form)
{
	int count = 0;
	unsigned int num = va_arg(form, unsigned int);
	int bin[sizeof(unsigned int) * 8 + 1];
	int i = 0;

	if (num == 0)
		return (_putchar('0'));
	while (num > 0)
	{
		bin[i] = num % 2;
		num /= 2;
		i++;
	}
	i--;
	while (i >= 0)
		{
			_putchar(bin[i] + '0');
			count++;
			i--;
		}
	return (count);
}
/**
 * op_octal - Function that prints the octal representation of a number
 * @form: name of va_list
 * Return: octal of a number
 */
int op_octal(va_list form)
{
	int count = 0, i = 0;
	unsigned int num = va_arg(form, unsigned int);
	int octal[sizeof(int) * 8 + 1];

	while (num >= 8)
	{
		octal[i] = num % 8;
		num /= 8;
		i++;
	}
	octal[i] = num;
	while (i >= 0)
	{
		_putchar(octal[i] + '0');
		count++, i--;
	}
	return (count);
}
/**
 * op_unsigned_decimal - prints an unsigned decimal number
 * @form: name of va_list
 * Return: number
 */
int op_unsigned_decimal(va_list form)
{
	int count = 0;
	unsigned int number = va_arg(form, unsigned int);
	int divide = 1;

	while (number / divide > 9)
		divide *= 10;
	while (divide > 0)
	{
		count += _putchar(number / divide + '0');
		number %= divide;
		divide /= 10;
	}
	return (count);
}
