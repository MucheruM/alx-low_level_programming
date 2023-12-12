#include "main.h"

/**
 * *_memcpy - Copy memory areaa
 * @dest: where data is copied
 * @src: where data is copied from
 * @n: size of the data copied
 * Return: copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
