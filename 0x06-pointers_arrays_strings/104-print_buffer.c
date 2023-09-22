#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print (bu)
 * @s: bytes of buffer to print (by)
 * @l: the line of buffer to print
 * Return: void
 */
void print_line(char *c, int s, int l)
{
	int bu, by;

	for (bu = 0; bu <= 9; bu++)
	{
		if (bu <= s)
			printf("%02x", c[l * 10 + bu]);
		else
			printf(" ");
		if (bu % 2)
			putchar(' ');
	}
	for (by = 0; by <= s; by++)
	{
		if (c[l * 10 + by] > 31 && c[l * 10 + by] < 127)
			putchar(c[l * 10 + by]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - print a buffer
 * @b: buffer (bu2)
 * @size: size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int bu2;

	for (bu2 = 0; bu2 <= (size - 1) / 10 && size; bu2++)
	{
		printf("%08x: ", bu2 * 10);
		if (bu2 < size / 10)
		{
			print_line(b, 9, bu2);
		}
		else
		{
			print_line(b, size % 10 - 1, bu2);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
