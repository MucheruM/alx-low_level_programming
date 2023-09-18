#include "main.h"

/**
 * _strlen - Return length of the string
 * @s: Parameter
 * Return: String lenth
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
