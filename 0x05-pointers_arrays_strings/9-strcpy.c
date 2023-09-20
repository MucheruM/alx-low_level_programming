#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: char
 */
char *_strcpy(char *dest, char *src)/* fucnt takes two pointers */
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a]; /* copy elements in src to dest */
	dest[a] = '\0';
	return (dest);
}
