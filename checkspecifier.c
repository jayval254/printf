#include "main.h"
/**
 * check_specifier - check that character is a valid specifier
 * @format: the specifier (char*)
 * Return: pointer to function
 */
int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_decimal},
		{NULL, NULL}};
for (i = 0; my_array[i].t != NULL; i++)
{
	if (*(my_array[i].t) == *format)
	{
		return (my_array[i].f);
	}
}
return (NULL);
}
