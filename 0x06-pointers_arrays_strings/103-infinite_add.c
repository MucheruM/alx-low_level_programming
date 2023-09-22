#include "main.h"

/**
 * *infinite_add - Add two integers
 * @n1: first number (f)
 * @n2: second number (s)
 * @r: buffer storing the result (re)
 * @size_r: buffer size
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int f, s, re, rem, le, num;

	for (f = 0; n1[f]; f++)
		;
	for (s = 0; n2[s]; s++)
		;
	if (f > size_r || s > size_r)
		return (0);
	rem = 0;

	for (f -= 1, s -= 1, re = 0; re < size_r - 1; f--, s--, re++)
	{
		num = rem;
		if (f >= 0)
			num += n1[f] - '0';
		if (s >= 0)
			num += n2[s] - '0';
		if (f < 0 && s < 0 && num == 0)
		{
			break;
		}
		rem = num / 10;
		r[re] = num % 10 + '0';
	}
	r[re] = '\0';
	if (f >= 0 || s >= 0 || rem)
		return (0);
	for (re -= 1, le = 0; le < re; re--, le++)
	{
		rem = r[re];
		r[re] = r[le];
		r[le] = rem;
	}
	return (r);
}
