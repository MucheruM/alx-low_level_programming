#include "main.h"

/**
 * puts_half - Prints half the string
 * @str: char to check
 * Return: void
 */
void puts_half(char *str)
{
	int len, a;

	len = 0;

	while (str[len] != '\0')
		len++;
	if (len + 1 % 2 != 0)
		a = (len - 1) / 2;
	else
		a = (len / 2);
	a++;

	for (len = a; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
