#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the code
 *
 * Description: We want to use the getline function composed of,
 * ptr to ptr to string location storing the buffer,
 * the size of the buffer ssize_t, and the stream of the buffer\
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char *buf; /*this means its a string*/
	ssize_t n = 10;

	buf = malloc(sizeof(char) * n);
	printf("Enter your name: ");
	getline(&buf, &n, stdin);

	printf("Your name is %s Buffer size is %lu\n", buf, n);

	free(buf);

	return (0);
}
