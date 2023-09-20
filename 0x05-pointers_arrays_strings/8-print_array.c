#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array
 * @a: int parameter to check
 * @n: int parameter to check
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1) /* The string n - 1 means last char in array */
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]); /* Last char no need for "," and " " */
	}
	printf("\n");
}
