#include <stdio.h>

/**
 * main -Entry point, print the its name follewed by '\n'
 * @argv: argument vector - array of pointers to actual arg string
 * @argc: argument count - # of commd line arg passed to program
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
