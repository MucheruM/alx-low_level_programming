#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: Parameter - Swaps value one
 * @b: Parameter - Swaps value two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
