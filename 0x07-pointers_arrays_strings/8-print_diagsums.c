#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first character in the matrix
 * @size: width of column in matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, num1 = 0, num2 = 0;

	for (b = 0; b < size; b++)
	{
		num1 += a[(size + 1) * b];
		num2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", num1, num2);
}
