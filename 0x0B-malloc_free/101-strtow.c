#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - string tokenize function
 * @str: recieves input as a pointer to a string
 * Return: a pointer to a pointer of a character
 */
char **strtow(char *str)
{
	char **words; /* stor words from str */
	char *word, *str_cpy, *saveptr; /* hold words,cpy, ptr for strtok_r */
	int count = 0; /* count no of wrds in str */
	unsigned int i, j; /* use for loop counters */
	size_t len;

	if (str == NULL || *str == '\0')
		return (NULL); /* str properly init in mem & str ! '\0' */
	str_cpy = strdup(str); /* preserve org str and mem managemnt */
	if (str_cpy == NULL)
		return (NULL);
	len = strlen(str_cpy);
	for (i = 0; i < len; i++) /* iterat strng mnitord with i */
	{ /* lst str ! space && i is 1st char || prev char is space */
		if (str_cpy[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL) /* chck if strng is init in mem */
	{ /* create mem of strn + 1 byte for the '\0' */
		free(str_cpy);
		return (NULL);
	} /* reentrant */
	word = strtok_r(str_cpy, " ", &saveptr); /* str to token (word) */
	for (i = 0; word != NULL; i++) /* chck for any rem tokens */
	{
		words[i] = strdup(word); /* mak mem with loc 'i' */
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++) /* iterate str */
				free(words[j]); /* free their mem */
			free(words); /* free mem incase depletes */
			free(str_cpy);
			return (NULL);
		}
		word = strtok_r(NULL, " ", &saveptr);
	}
	words[i] = NULL;
	free(str_cpy);
	return (words);
}

/**
 * free_words - free mem allocated for words
 * @words: recieves input as a pointer of a pointer to a char
 * Return: Nothing
 */
void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;

	for (i = 0; words[i] != NULL; i++)
		free(words[i]);

	free(words);
}
