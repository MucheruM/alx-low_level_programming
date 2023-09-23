#include <stdio.h>
#include "main.h"

/**
 * print_buffer - print a buffer
 * @b: buffer (bu2)
 * @size: size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int bu, in;

	for (bu = 0; bu < size; bu += 10)
	{
		printf("%08x: ", bu);

		for (in = 0; in < 10; in++)
		{
			if ((in + bu) >= size)
				printf("  ");
			else
				printf("%02x", *(b + in + bu));
			if ((in % 2) != 0 && in != 0)
				printf(" ");
		}
		for (in = 0; in < 10; in++)
		{
			if ((in + bu) >= size)
				break;
			else if (*(b + in + bu) >= 31 &&
				 *(b + in + bu) <= 126)
				printf("%c", *(b + in + bu));
			else
				printf(".");
		}
		if (bu >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
