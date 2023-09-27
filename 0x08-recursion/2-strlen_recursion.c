#include "main.h"

/**
 * _strlen_recursion - return lenght of a string
 * @s: pointer to the string
 * Return: int value - lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0') /* checks the string pointed is not == '\0' */
		return (1 + _strlen_recursion(s + 1));
/* return- 1(current char) + strlen_recursion(next string onwards)*/
	return (0);
}
