#include "main.h"

/**
 * _puts_recursion - Print a string '\n'
 * @s: pointer to the address of the string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /* check if we've reached the end of string */
	{
		_putchar(*s);/* prints first character */
		_puts_recursion(s + 1);/* calls fuction and cont's printing */
	} /* util the '\0' is reached */
	else /* important coz after '\0' reached '\n' printed */
	{
		_putchar('\n');
	}
}
