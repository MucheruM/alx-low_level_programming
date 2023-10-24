#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t
 * @listint_t - This is where the values received are stored (our linked list)
 * Return: The number of nodes 'sizez_t'
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next; /*This is pointing to the next node*/
	}
	return (num_nodes);
}
