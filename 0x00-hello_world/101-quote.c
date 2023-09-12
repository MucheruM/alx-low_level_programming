#include <stdio.h>
#include <unistd.h>

/**
 * main - Print "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a new line, to standard error.
 *
 * Return: Should be 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(str));

	return (1);
}
