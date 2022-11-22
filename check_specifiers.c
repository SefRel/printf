#include "main.h"
/**
 * check_specifiers -
 * @format
 * Return: Pointers
 */

int (*check_specifiers(const char *format))(va_list)
{
	int i;

	func_t specifiers[] =
	{
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].t != NULL; i++)
	{
		if (*(specifiers[i].t) == *format)
		{
			return(specifiers[i].f);
		}
	}

}
