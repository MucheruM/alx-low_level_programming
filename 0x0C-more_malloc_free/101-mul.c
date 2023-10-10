#include <stdlib.h>
#include "main.h"

/**
 * _print - Function that prints all char in the string,
 * starting from 1st non 0 char to the end of string
 * @str: Pointer to the string of char
 * @len: length of the string
 * Return: Nothing
 */
void _print(char *str, int len)
{
	int x, y;

	x = y = 0;
	while (x < len)
	{
		if (str[x] != '0') /* if char @ x ! 0 */
			y = 1; /* means char is present hence start ptrng */
		if (y || x == len - 1) /* if y = true/!'0' || x = last char */
			_putchar(str[x]); /* output chars at x */
		x++; /* increment until all char are printed */
	}
	_putchar('\n');
	free(str); /* frees mem after printing the char of the str */
}

/**
 * *mul - Perform mult of a digit with # rep as string & add result to dest
 * @dig: The single digit
 * @num: Pointer to # rep as string
 * @num_ind: Index in num where mult starts
 * @dest: Where the result will be stored
 * @dest_ind: Index in dest where result starts
 * Return: Pointer as a char type
 */
char *mul(char dig, char *num, int num_ind, char *dest, int dest_ind)
{
	int x, y, mult, mul_rem, sum, sum_rem;

	mul_rem = sum_rem = 0; /* store carry overs during mult */
	for (x = num_ind, y = dest_ind; x >= 0; x--, y--)
	{
		mult = (dig - '0') * (num[x] - '0') + mul_rem;
		mul_rem = mult / 10;
		sum = (dest[y] - '0') + (mult % 10) + sum_rem;
		sum_rem = sum / 10;
		dest[y] = sum % 10 + '0';
	}
	for (sum_rem += mul_rem; y >= 0 && sum_rem; y--)
	{
		sum = (dest[y] - '0') + sum_rem;
		sum_rem = sum / 10;
		dest[y] = sum % 10 + '0';
	}
	if (sum_rem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_digits - Checking to ensure 2nd and 3rd CL arguments are digits
 * @argv: pointer to arguments in char form
 * Return: 0 if finding digits is Successful else 1
 */
int check_digits(char **argv)
{
	int x, y;

	for (x = 1; x < 3; x++) /* Iterate over the 2nd and 3rd CL arg */
	{
		for (y = 0; argv[x][y]; y++) /* iterat over @ char in CL arg */
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
				return (1); /* chck if curnt char is ! digit */
		}
	}
	return (0);
}

/**
 * init - initialize a string
 * @str: Pointer to the string to initialize
 * @l: length of the string
 * Return: Nothing
 */
void init(char *str, int l)
{
	int i; /* counter in the loop */

	for (i = 0; i < l; i++)
		str[i] = '0'; /* reset char at i to '0' */
	str[i] = '\0';
}

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: Number of command line arguments
 * @argv: Array of pointers to char rep the arg
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
/*len_arg1=l1,len_arg2=ls,new_len=nl,temp_index = ti,i,new_array=na*/

	int l1, l2, nl, ti, i;
	char *na;
	char *temp;
	char *error = "Error\n";

	if (argc != 3 || check_digits(argv))
	{
		for (ti = 0; error[ti]; ti++) /* iterat & prnt char of error */
			_putchar(error[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++) /* char at posit l1 in 1st CLarg[1] */
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	nl = l1 + l2 + 1; /* sum of the 2 len + null byte */
	na = malloc(nl * sizeof(char)); /* allocat mem for new len str */
	if (na == NULL)
	{
		for (ti = 0; error[ti]; ti++)
			_putchar(error[ti]);
		exit(98);
	}
	init(na, nl - 1); /* call init func */
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		temp = mul(argv[2][ti], argv[1], l1 - 1, na, (nl - 2) - i);
		if (temp == NULL)
		{
			for (ti = 0; error[ti]; ti++)
				_putchar(error[ti]);
			free(na);
			exit(98);
		}
	}
	_print(na, nl - 1);
	return (0);
}
