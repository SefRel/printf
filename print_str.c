#include "main.h"
#include <stdlib.h>


int print_str(va_list args)
{
	int j;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
		return -1;
	}
	else if (*s == '\0')
	{
		return (-1);
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	return (j);
}
