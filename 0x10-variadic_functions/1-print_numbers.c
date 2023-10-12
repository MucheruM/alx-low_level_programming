#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: string to be printed between the numbers
 * @n: the numbers of int to be passed to the function
 * @...: the additional parameters
 * Description: if separotor is NULL, don't print it,
 * and print a newline at the end of function
 * Result: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int num_list;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		num_list = va_arg(num, unsigned int);
		printf("%d", num_list);
		if (separator == NULL)
		{
			;
		}
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
