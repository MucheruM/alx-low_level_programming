#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: The struct dog presented for printing
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %6f\n", d->age);

		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
