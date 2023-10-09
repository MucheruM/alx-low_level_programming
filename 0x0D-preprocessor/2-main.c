#include <stdio.h>

/**
* main - print name where file is compiled from using _FILE_
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
