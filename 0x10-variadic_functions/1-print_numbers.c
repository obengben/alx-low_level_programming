#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @n: number of arguments
 * @separator: sting to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	putchar ('\n');
	va_end(arg);
}
