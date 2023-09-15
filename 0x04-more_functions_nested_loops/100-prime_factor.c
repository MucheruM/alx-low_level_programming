#include <stdio.h>
#include "main.h"
/**
 * main - Print the largest prime factor of 612852475143
 *
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i, n;

        n = 612852475143;
	i = 2;

	while (i * i <= n)
	{
		if (n % i)
			i++;
		else
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
