#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that prints all the elements of a listint_t
 * @h: Where the values received are stored (our linked list)
 * Return: The number of nodes 'sizez_t'
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next; /*This is pointing to the next node*/
		num_nodes++;
	}
	return (num_nodes);
}
