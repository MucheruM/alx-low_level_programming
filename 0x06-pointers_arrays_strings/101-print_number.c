#include "main.h"

/**
 * print_number - print an integer
 * @n: interger number to be printed
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}

	else if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10 < 0 ? -(n % 10) : n % 10) + '0');
}
