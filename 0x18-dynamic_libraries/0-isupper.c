#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: The character checked
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
