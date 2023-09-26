#include "main.h"

/**
 * *_strchr - locate a char in a string
 * @s: string to locate c
 * @c: char to locate
 * Return: a pointer in the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x]) /* iterate string to the 0 byte */
	{
		x++;
	}

	for (y = 0; y <= x; y++) /* loop to check for c */
	{
		if (c == s[y])
		{
			s += y; /* adds string to first occurence of c */
			return (s);
		}
	}

	return ('\0');
}
