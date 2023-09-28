#include "main.h"

/**
 * prime_checker - Check for prime numbers
 * @n: copy of the argument to check gotten thro passed by value
 * @p: will be guessing and calc our prime numbers
 * Return: 1 if we've check all #'s to the sqrt of n,
 * and found no factors, 0 if % with p == 0 and,
 * recursion to check if next numbers are prime #'s of n
 */
int prime_checker(int n, int p)
{
	if (p * p > n) /* chckd all #'s to sqrt of n fnd no fctrs, n is prime */
		return (1);
	else if (n % p == 0) /* n is % by other #, ! prime */
		return (0);
	else
		return (prime_checker(n, p + 1)); /* chcks nxt # */
}

/**
 * is_prime_number - function that return values if it gets/lacks prime numbers
 * @n: parameter/place holder recieving value by "passing by value"
 * Return: 1 if n == prime else return 0
 */
int is_prime_number(int n)
{
	if (n < 2) /* 1 and 0 ! prime #'s */
		return (0);
	else
		return (prime_checker(n, 2)); /*strt call with smallst prime #*/
}
