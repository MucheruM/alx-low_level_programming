#include "main.h"

/**
 * *_strcat - Concatenate two strings
 * @dest: Value to be appended
 * @src: Valeu to append
 * Return: return char value
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		dest[dest_len + src_len] = src[src_len];

	dest[dest_len + src_len] = '\0';

	return (dest);
}
