#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * *get_op_func - Function operating like a switch statement
 * @s: Operation
 * Return: int value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i; /* track the array */

	i = 0;
	while (ops[i].op != 0) /*.op is a field in the struc ops[]*/
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
