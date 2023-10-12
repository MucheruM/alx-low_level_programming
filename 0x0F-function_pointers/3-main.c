#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of a function that performs simple mathematical calc
 * @argc: number of argument in the CL
 * @argv: array of string same arguments in the CL
 * Return: int values
 */
int main(int argc, char **argv)
{
	int arg1, arg2, result;
	char op; /* store the operator */
	int (*func)(int, int); /*func pointer, pointing to desired op*/

	if (argc != 4) /*checks the # of CML arg*/
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]); /*conv 1st str into int*/
	arg2 = atoi(argv[3]); /*conv 3rd str into int*/

	func = get_op_func(argv[2]); /*give loc to func to the oprations*/

	if (func == 0) /* same as !func */
	{
		printf("Error\n");
		exit(98);
	}

	op = *argv[2];
	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
