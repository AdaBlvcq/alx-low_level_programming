#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: vo return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separrator);
	}

	printf("\n");

	va_end(strings);
}
