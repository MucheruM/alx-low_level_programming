#include "main.h"

/**
 * _strpbrk - get the lenght of the prefix substring
 * @s: the string we check
 * @accept: the characters we compare with
 * Return: pointer to s consistent with bytes in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
