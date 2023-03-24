#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints a list of integers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
