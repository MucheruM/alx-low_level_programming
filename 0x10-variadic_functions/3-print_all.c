#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything \n.
 * @format: a constant list of types to pass to the function
 * Return: Function returns any type of variable
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list arr;
	char *s;

	va_start(arr, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arr, int));
			break;
		case 'i':
			printf("%d", va_arg(arr, int));
			break;
		case 'f':
			printf("%f", va_arg(arr, double));
			break;
		case 's':
			if (s == NULL)
				s = "(nil)";
			printf("%s", va_arg(arr, char*));
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(arr);
}
