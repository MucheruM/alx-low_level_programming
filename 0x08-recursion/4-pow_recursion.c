#include "main.h"

/**
 * _pow_recursion - return x value raised to power y
 * @x: the base num we raise the power
 * @y: the exponent we use to raise the power of the base
 * Return: power of y => 0 else -1 if y < 0 || 1 if y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x , y - 1)); /* multy x by itself y times */
}
