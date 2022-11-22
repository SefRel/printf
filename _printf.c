#include "main.h"
/**
 * _printf - a function that produces output according to a format and argument
 * @format: string containing the regular chars and format specifiers to print
 *
 * Return: the total number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifiers(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				count += value;
				i = i + 2;
				continue;
			}
		}
	}
va_end(args);
return (count);
}
