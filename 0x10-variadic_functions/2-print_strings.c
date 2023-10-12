#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed \n.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arr;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arr, char*);
		if (str == NULL)
			printf("nil");
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arr);
}
