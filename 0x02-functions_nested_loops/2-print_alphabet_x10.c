#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet letters x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int w;
	char x;

	for (w = 0; w <= 10; w++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
