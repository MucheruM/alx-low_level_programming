#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node,
 * at the begining of a list
 * @n: Where the values received are stored (our linked list)
 * @head: A pointer to a pointer to the first item 'head' of the list
 * Return: A pointer of type listint_t to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
