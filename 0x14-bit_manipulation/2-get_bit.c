#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number recieved which is evaluated
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
