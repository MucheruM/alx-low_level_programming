#include "main.h"
/**
 * reverse_array - reverse array of int elements
 * @a:int array to be reversed
 * @n:num of elements in the array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i, temp; /* i is a loop variable / *a = a[i]*/

	for (i = 0; (i < (n - 1) / 2); i++) /*iterates over 1st half of array*/
	{ /* loop conts if 1/2 of n - 1 is true*/
		temp = a[i];
		a[i] = a[n - 1 - i]; /* n - 1 is last element in the array*/
		a[n - 1 - i] = temp;
	}
}
