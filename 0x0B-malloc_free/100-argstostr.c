#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - Function that concatenates all arguments in program \n
 * @ac: number of string arguments
 * @av: pointers to chars if string
 * Return: NULL if ac && av == NULL,
 * pointer to new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *conc_arg;
	int arg1, arg2, y;
	unsigned int size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = ac; /* calc size of conc strng */
	for (arg1 = 0; arg1 < ac; arg1++)
		for (arg2 = 0; av[arg1][arg2] != '\0'; arg2++)
			size++; /* str @ pst [arg1] for char @ pst [arg2] */

	conc_arg = malloc((size + 1) * sizeof(char)); /* allocate mem of conc strng */
	if (conc_arg == NULL)
		return (NULL);
	y = 0; /* keep track of the new string we currntly add char */
	for (arg1 = 0; arg1 < ac; arg1++) /* copy arg to new string */
	{
		for (arg2 = 0; av[arg1][arg2] != '\0'; arg2++)
		{
			conc_arg[y] = av[arg1][arg2];
			y++;
		}
		conc_arg[y] = '\n'; /* addng '\n' to end of @ string */
		y++;
	}
	conc_arg[y] = '\0'; /* addng '\0' to end of string */
	return (conc_arg);
}
