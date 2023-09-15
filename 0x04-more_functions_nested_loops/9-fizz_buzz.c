#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%a", i);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
