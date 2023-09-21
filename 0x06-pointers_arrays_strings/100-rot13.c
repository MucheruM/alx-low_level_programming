#include "main.h"

/**
 * *rot13 - encode string using rot13
 * @s: characters in the array
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char fst13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lst13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (fst13[j] == s[i])
			{
				s[i] = lst13[j];
				break;
			}
		}
	}
	return (s);
}
