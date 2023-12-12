#include "main.h"

/**
 * *_memset - Fill memory with constant byte
 * @s: pointer to the memory location we desire to fill
 * @b: constant byte
 * @n: storage size in bytes
 * Return: s - the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
