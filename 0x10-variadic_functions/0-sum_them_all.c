#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum if all its parameters
 * @n: number of parameters
 * @...: parameters to add
 * Description: if n == 0, the function will return 0
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(num, unsigned int);

	va_end(num);

	return (sum);
}
