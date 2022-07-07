#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print elemnts of args
 * @separator - character to be printed
 * @n - number of args
 * Return : void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, sum = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if ((i != n - 1) && separator != NULL)
		{
			printf("%d", va_arg(ap, unsigned int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(ap, unsigned int));
		}
	}
	printf("\n");
	va_end(ap);
}
