#include "main.h"

/**
 * root_checker - check if n has a natural root
 * @n: base number that we determine the natural sqrt
 * @r: quesses of the numbers that give us the square
 * Return: r if r*r ==n, -1 if r*r > n, recursion of n with r+1
 */
int root_checker(int n, int r)
{
	if (r * r == n)
		return (r); /* means n has a natural sqrt */
	else if (r * r > n)
		return (-1); /* means n has no natural sqrt */
	else
		return (root_checker(n, r + 1)); /* r*r is < +1 till we match */
}

/**
 * _sqrt_recursion - return natural square root of number
 * @n: base number that we determine the natural sqrt
 * Return: natural sqrt of n if n = natural sqrt else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root_checker(n, 0));
}
