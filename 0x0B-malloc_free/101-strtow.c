#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int s, i, w;

	s = 0;
	w = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			s = 0;
		else if (s == 0)
		{
			s = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - split a str into words
 * @str: str to be split
 * Return: pointer to the array of splitted words
 */
char **strtow(char *str)
{
	char **word, *tmp_w;
	int str_i, word_i = 0, str_len = 0, word_c, char_c = 0, word_s, word_e;

	while (*(str + str_len))
		str_len++;
	word_c = count_words(str);
	if (word_c == 0)
		return (NULL);

	word = malloc(sizeof(char *) * (word_c + 1));
	if (word == NULL)
		return (NULL);

	for (str_i = 0; str_i <= str_len; str_i++)
	{
		if (str[str_i] == ' ' || str[str_i] == '\0')
		{
			if (char_c)
			{
				word_e = str_i;
				tmp_w = malloc(sizeof(char) * (char_c + 1));
				if (tmp_w == NULL)
					return (NULL);
				while (word_s < word_e)
					*tmp_w++ = str[word_s++];
				*tmp_w = '\0';
				word[word_i] = tmp_w - char_c;
				word_i++;
				char_c = 0;
			}
		}
		else if (char_c++ == 0)
			word_s = str_i;
	}

	word[word_i] = NULL;

	return (word);
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
