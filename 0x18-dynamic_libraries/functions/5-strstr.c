#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: the string to search
 * @needle: the first occurence to search for
 *
 * Return: a pointer begginging of substring or @Null if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
