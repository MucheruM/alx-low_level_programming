#include "main.h"

/**
 * *_strncat - Concatenate two strings
 * @dest: Value to be appended
 * @src: Valeu to append
 * Return: return char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
		dest[dest_len + src_len] = src[src_len];

	return (dest);
}
