#include "main.h"

/**
 * print_line - Function that prints a strait line
 * @n: Number of times the character _ is printed
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
