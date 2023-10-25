#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_len = 0;
	int node_diff;
	listint_t *next_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		node_diff = *h - (*h)->next;
		if (node_diff > 0)
		{
			next_node = (*h)->next;
			free(*h);
			*h = next_node;
			node_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			node_len++;
			break;
		}
	}

	*h = NULL;

	return (node_len);
}
