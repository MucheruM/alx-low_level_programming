#include "main.h"

/**
 * *_strchr - locate a char in a string
 * @s: string to locate c
 * @c: char to locate
 * Return: a pointer in the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int str;

	for (str = 0; s[str] != '\0'; str++)
	{
		if (s[str] == c)
			return (&s[str]);
	}
	return ('\0');
}
