#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: the string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, append, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		append = write(file, text_content, i);
		if (append < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
