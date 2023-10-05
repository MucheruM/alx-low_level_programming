#include <stdlib.h>

/**
 * *string_nconcat - function that concantenates two strings
 * @s1: recieves input as a pointer string 1
 * @s2: recieves input as a pointer string 2
 * @n: size in bytes for the memory created
 * Return: a pointer to a string of chars concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_str;
	unsigned int str1, str2, size, x;

	str1 = 0;
	while (s1 != NULL && s1[str1] != '\0')
		str1++;
	str2 = 0;
	while (s2 != NULL && s2[str2] != '\0')
		str2++;

	if (str2 > n)
		str2 = n;

	size = str1 + str2 + 1;

	conc_str = malloc(size * sizeof(*conc_str));
	if (conc_str == NULL)
		return (NULL);

	for (x = 0; x < str1; x++)
		conc_str[x] = s1[x];
	for (x = 0; x < str2; x++)
		conc_str[str1 + x] = s2[x];

	conc_str[size - 1] = '\0';

	return (conc_str);
}
