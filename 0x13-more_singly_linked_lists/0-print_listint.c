#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: This is our linked list
 *
 * Return: The number of nodes sizez_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next; /*This is pointing to the next node*/
		num_nodes++;
	}
	return (num_nodes);
}
