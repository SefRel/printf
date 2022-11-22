#ifndef MAIN_H
#define MAIN_H
/* Adding Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/* Function Prototypes */
int _printf(const char *format, ...);
int (*check_specifiers(const char*))(va_list);
int print_str(va_list);
int print_char(va_list);
int print_cent(va_list);
int _putchar(char c);
int print_int(va_list);
int print_bin(va_list);
/*Definition of Structure to Handle Conversion Specifiers */
/**
 * struct func - structure definition for conversion specifier
 * @t: format Specifier
 * @f: Calling Function
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

#endif
