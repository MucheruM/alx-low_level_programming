#include "main.h"

/**
 * *string_toupper - Convert lowercase letter to upper
 * @s: array of lowercase chars
 * Return:return char
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z') /*checks char lowercas*/
			s[i] -= 'a' - 'A';/*converts- ASCII btw 'a' & 'A'*/
		i++;
	}
	return (s);/*Return modified string*/
}
