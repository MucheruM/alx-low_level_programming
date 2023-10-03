#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - A function returning a pointer to newly allocated space in mem,
 * having a cpy of a string given as a parameter
 * @str: Pointer to the string
 * Return: NULL if str == NULL, On success return pointer else NULL
 */
char *_strdup(char *str)
{
	char *ptr_str;
	unsigned int size, str_cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	/* calcute the length of the string to get our size */
	for (size = 0; str[size] != '\0'; size++)
	{
		; /* No operation required here so ; */
	}

	ptr_str = malloc((size + 1) * sizeof(char)); /* +1 for the '\0' */
	if (ptr_str == NULL)
	{
		return (NULL);
	}

	/* str_cpy is a counter variable just like ptr_str going up to size */
	for (str_cpy = 0; str_cpy < size; str_cpy++)
	{
		ptr_str[str_cpy] = str[str_cpy]; /* cpyng str to new variable */
	}

	ptr_str[size] = '\0'; /* put '\0' at the end of strng */
	return (ptr_str);
}
