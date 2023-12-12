#include "main.h"

/**
 * _puts - Print a string to the stdout
 * @str: Parameter
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
