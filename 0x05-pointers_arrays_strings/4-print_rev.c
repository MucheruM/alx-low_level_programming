#include "main.h"

/**
 * _print_rev - Print a string to the stdout
 * @s: String to be printed in rev
 * Return: void
 */
void print_rev(char *s)
{
	int a, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
