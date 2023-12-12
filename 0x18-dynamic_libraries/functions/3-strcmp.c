#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Destination to copy string
 * @s2: Source of the string to copy
 * Return: Return a string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
