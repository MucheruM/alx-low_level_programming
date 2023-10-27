#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;

	while (h)
	{
		h = h->next;
		nbr_element++;
	}
	return (nbr_element);
}
