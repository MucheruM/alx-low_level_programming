#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Function that concatenates two strings
 * @s1: pointer to the fisrt string
 * @s2: pointer to the second string
 * Return: string to new allocated space in memory containing
 * contents of string 1 and string 2 ending with '\0'.
 * if strin == NULL, treat as empty, return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int str1, str2, x;
	unsigned int size;

	str1 = 0;
	/* chekin s1 & s2 treating them as empty if == '\0' */
	while (s1 != NULL && s1[str1] != '\0')
		str1++;
	str2 = 0;
	while (s2 != NULL && s2[str2] != '\0')
		str2++;

	size = str1 + str2 + 1; /* calc total size needed + '\0' */
	conc_str = malloc(size * sizeof(char));

	if (conc_str == NULL)
		return (NULL);

	for (x = 0; x < str1; x++) /* copy s1 to new string */
		conc_str[x] = s1[x];
	for (x = 0; x < str2; x++) /* appending s2 to new string */
		conc_str[str1 + x] = s2[x];

	conc_str[size - 1] = '\0'; /* addng '\0' to end of string */
	return (conc_str);
}
