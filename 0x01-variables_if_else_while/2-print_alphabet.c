#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter;

	for (letter = 48; letter <= 57; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
