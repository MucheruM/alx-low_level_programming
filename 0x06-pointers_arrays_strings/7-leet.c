#include "main.h"

/**
 * *leet - encode string to 1337 speak
 * @s: characters in the array
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = num[j / 2];
				break;
			}
		}
	}
	return (s);
}
