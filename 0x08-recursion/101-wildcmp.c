#include "main.h"

/**
 * wildcmp_checker - Check that strings are identical
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 1 if s1 and s2 are identical else 0
 */
int wildcmp_checker(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /*checks if the strings reach the end*/
		return (1); /*if they do means they match chars*/
	if (*s1 == *s2) /*checks if current char are strings*/
		return (wildcmp_checker(s1 + 1, s2 + 1)); /*cntn chckn chars*/
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp_checker(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}

/**
 * wildcmp - Print 1 if strings are identical else 0
 * @s1: pointer to the address of the string 1
 * @s2: pointer to the address of the string 2
 * Return: 1 if the strings are identical
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_checker(s1, s2));
}
