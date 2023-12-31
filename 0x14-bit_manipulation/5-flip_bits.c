#include "main.h"

/**
 * flip_bits - Return the num of bits needed to flip
 * @n: first num of bits
 * @m: second num of bits
 *
 * Return: Value of bit at index, or -1 if error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, bits = 0;

	while (diff > 0)
	{
		bits++;
		diff &= (diff - 1);
	}

	return (bits);
}
