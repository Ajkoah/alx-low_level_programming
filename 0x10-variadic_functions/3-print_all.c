#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 *
 */
void print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	printf("%c", letter);
}
