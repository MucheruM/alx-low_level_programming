#include "main.h"

/**
 * *_strncpy - Copy a string
 * @dest: Destination to copy string
 * @src: Source of the string to copy
 * @n: Max number of string to copy
 * Return: Return a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
