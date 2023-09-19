#include "main.h"

/**
 * puts2 - Print second characters of a string
 * @str: Value to check
 * Return: void
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
