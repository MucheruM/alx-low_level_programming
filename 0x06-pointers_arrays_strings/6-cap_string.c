#include "main.h"

/**
 * *cap_string - capitalize all words
 * @s: All words in the array
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";
	int num_sep = sizeof(a) / sizeof(a[0]) - 1;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')/*check lowercase char*/
		{
			if (i == 0) /*if the first char in string*/
				s[i] -= 'a' - 'A';/*Convrt to uppercase*/
			else
			{
				for (j = 0; j < num_sep; j++)/*loop arrays in a*/
				{
					if (a[j] == s[i - 1])
						/*if prev char is word separtr*/
						s[i] -= 'a' - 'A';
					/*convert currnt char to uppercase*/
				}
			}
		}
		i++;
	}
	return (s);
}
