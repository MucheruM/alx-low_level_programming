#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adding operation
 * @a: first int
 * @b: second int
 * Return: Function returns an int type
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -Subtractio operation
 * @a: int to subtract from
 * @b: second int
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operation
 * @a: first int
 * @b: second int
 * Return: The function returns an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division operation
 * @a: first int
 * @b: second int
 * Return: An int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulous operation
 * @a: first int
 * @b: second int
 * Return: The function returns an int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
