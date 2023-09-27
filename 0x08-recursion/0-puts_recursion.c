#include "main.h"

/**
 * _puts_recursion - Print a string '\n'
 * @s: pointer to the address of the string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
       	_putchar('\n');
}
