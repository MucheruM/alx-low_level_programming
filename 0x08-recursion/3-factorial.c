#include "main.h"

/**
 * factorial - return factorial of a given num
 * @n: place holder recieving the value
 * Return: factorial num if n >= 0,  else return -1
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1)); /* factorial sequence */
}
