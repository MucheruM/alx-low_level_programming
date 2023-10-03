#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Create an array of char initializing it with a specific char
 * @size: the size of the array of char in unsigned int form
 * @c: the array of characters
 * Return: NULL if size = 0, pointer to array if successful else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_char;
	unsigned int x; /* To allow us to loop, show contents of the pointer */

	if (size == 0) /* requiement of the spcfic task */
	{
		return (NULL);
	}

	ptr_char = malloc(size * sizeof(char));
	if (ptr_char == 0) /* malloc checker*/
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ptr_char[x] = c; /* c is the char tht we return */
	}

	return (ptr_char);
}
