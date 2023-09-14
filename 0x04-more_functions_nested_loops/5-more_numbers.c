#include "main.h"

/**
 * more_numbers - Print 10 times 0 to 14
 */
void more_numbers(void)
{
	int a = 0, b;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
		a++;
	}
}
