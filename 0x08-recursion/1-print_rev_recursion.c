#include "main.h"

/**
 * _puts_rev_recursion - print string in reverse
 * @s: the pointer to the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /* logic is recursive calls hapen*/
		_putchar(*s); /*printing from the last char to first*/
	}
}
