#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min # of coins for making change in given cash
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int x;
	char *pnt;
	const int cents[] = {25, 10, 5, 2};

	if (argc != 2) /* check for correct cml arg */
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &pnt, 10); /* convert cml arg to int */
	count = 0;

	if (!*pnt) /*check for succeful conver*/
	{
		while (total > 1) /*loop till amnt <= 1*/
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (total >= cents[x])
				{ /*chkn if current coint value can be used*/
					count += total / cents[x];
					total = total % cents[x];
				}
			}
		}
		if (total == 1) /*chkn if theres still a cent lft */
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count); /*prntng min # of coins needed*/
	return (0);
}
