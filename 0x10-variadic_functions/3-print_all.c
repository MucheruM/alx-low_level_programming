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
	int i;
	int c_ctrl;
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
			c_ctrl = 0;
			break;
		case 'i':
			printf("%d", va_arg(arr, int));
			c_ctrl = 0;
			break;
		case 'f':
			printf("%f", va_arg(arr, double));
			c_ctrl = 0;
			break;
		case 's':
			s = va_arg(arr, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			c_ctrl = 0;
			break;
		default:
			c_ctrl = 1;
			break;
		}
		if (format[i + 1] != '\0' && c_ctrl == 0)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(arr);
}
