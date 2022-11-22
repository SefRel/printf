#include "main.h"

/**
 * print_char - prints a character
 * @args: arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c;
	int count = 0;

	c = va_arg(args, int);
	_putchar(c);

	return (count);
}
