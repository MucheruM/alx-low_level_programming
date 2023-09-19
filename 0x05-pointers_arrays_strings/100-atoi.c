#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int j = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[j])
	{
		if (s[j] == 45)
		{
			min *= -1;
		}

		while (s[j] >= 48 && s[j] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[j] - '0');
			j++;
		}

		if (isi == 1)
		{
			break;
		}

		j++;
	}

	ni *= min;
	return (ni);
}
