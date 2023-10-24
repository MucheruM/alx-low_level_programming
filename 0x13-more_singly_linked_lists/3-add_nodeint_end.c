#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node,
 * at the end of a list
 * @n: Where the values received are stored (our linked list)
 * @head: A pointer to a pointer to the first item 'head' of the list
 * Return: A pointer of type listint_t to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;

	end_node = malloc(sizeof(listint_t));
	if (!end_node)
		return (NULL);

	end_node->n = n;
	end_node->next = *head;
	*head = end_node;

	return (end_node);
}
