#include "main.h"

/**
 * print_rev - Print a string to the stdout
 * @s: String to be printed in rev
 * Return: void
 */
void print_rev(char *s)
{
	int len, nel;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (nel = len - 1; nel >= 0; nel--)
	{
		_putchar(s[nel]);
	}

	_putchar('\n');
}
