#include "main.h"

/**
 * _strlen_recursion - Calculate strng length recursively
 * @s: pointer to the location of the string
 * Return: 0 tell the function end is reached hence terimate recursion
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pali_checker - Check the string and confirm their palindromality
 * @s: pointer to the string we want to check
 * @f: start of the string
 * @l: end of the string
 * Return: 1 if f and l are palindrome else 0
 */
int pali_checker(char *s, int f, int l)
{
	if (f >= l) /* checks for odd and even char */
		return (1);
	if (s[f] != s[l]) /* check for similarity of index in char */
		return (0);
	return (pali_checker(s, f + 1, l - 1)); /* +1 forward -1 reverse */
}

/**
 * is_palindrome - Print a parindrome string
 * @s: pointer to the string location
 * Return: 1 if strng is parindrome else 0
 */
int is_palindrome(char *s)
{
	return (pali_checker(s, 0, _strlen_recursion(s) - 1));
	/* string, starting from 0  and last char */
}
