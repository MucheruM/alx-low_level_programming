#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9 and not 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
