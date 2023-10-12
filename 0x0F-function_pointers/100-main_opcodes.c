#include <stdio.h>
#include <stdlib.h>

/**
 * main - We are printint a simple opcode
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success else 1 || 2 on error
 */
int main(int argc, char **argv)
{
	int x, byts;
	char *v;

	if (argc != 2) /*2 becaue of the # of arg we expect*/
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]); /*Conv argv into int*/
	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	v = (char *)main; /*Assign address of the main func to pointer v*/
	for (x = 0; x < byts; x++)
	{
		printf("%.2hhx", v[x]); /*output int hex lowecase*/
		if (x < byts - 1) /*if the current isnt the last byte*/
			printf(" ");
	}
	printf("\n");

	return (0);
}
