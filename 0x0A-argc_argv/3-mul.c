#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that find the prdct of 2 numbers
 * @argc: argument count, number of command line arguments
 * @argv: argument vector, holds the array
 * Return: 1 if fails to recieve two arguments.
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
			y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
