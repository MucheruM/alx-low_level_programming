#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 to 9)
 * @c: The digit to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
