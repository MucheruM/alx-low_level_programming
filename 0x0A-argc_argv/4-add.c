#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y, sum = 0;
	char *chkr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &chkr, 10); /* Convrt strng to int */
		if (*chkr) /* Chckn for non-numeric char's */
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += y; /* no errors, convrtd y added to sum */
		}
	}
	printf("%d\n", sum);

	return (0);
}
