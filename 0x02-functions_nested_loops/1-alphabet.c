#include "main.h"

/**
 * print_alphabet - Print lowercase alphabet letters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
