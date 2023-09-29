#include <stdio.h>

/**
 * main - print the # of arguments passed by the program
 * @argc: help us count the number of arguments passed
 * @argv: the vector containg the array of char
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
