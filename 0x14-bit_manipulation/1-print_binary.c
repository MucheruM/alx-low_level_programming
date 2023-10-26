#include "main.h"

/**
 * print_binary - Print the binary rep of a number
 * @n: The num to be printed in binary form
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /*binary is shifted to right by 1*/
	_putchar((n & 1) + '0'); /*convert num into ASCII value*/
}
