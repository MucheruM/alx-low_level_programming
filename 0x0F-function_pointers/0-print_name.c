#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function we are pointing to using f
 * @name: Pointer to an array of characters, a string of names
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
