#include "main.h"

/**
 * _strspn - get the lenght of the prefix substring
 * @s: the string we check
 * @accept: the characters we compare with
 * Return: number of bytes in s consistent with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int w = 0, x, y;

	for (x = 0; (s[x]) != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					w++;
			}
		}
		else
			return (w);
	}
	return (w);
}
