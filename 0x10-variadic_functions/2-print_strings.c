#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separators between strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);

	for (a = 0 ; a < n ; a++)
	{
		char *m = va_arg(arg, char *);

		if (m == NULL)
			printf("(nil)");
		else
			printf("%s", m);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
