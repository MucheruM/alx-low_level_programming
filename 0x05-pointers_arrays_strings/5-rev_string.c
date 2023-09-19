#include "main.h"

/**
 * rev_string - Print a string to the stdout
 * @s: String to be printed in rev
 * Return: void
 */
void rev_string(char *s)
{
	int len, a, b;
	char c;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	b = len - 1;
	for (a = 0; b >= 0 && a < b; b--, a++)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
