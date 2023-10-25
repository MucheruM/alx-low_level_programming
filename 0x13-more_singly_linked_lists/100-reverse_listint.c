#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *next;

	if (!head || !*head)
		return (NULL);
	if ((**head).next == NULL)
		return (*head);
	rev = NULL;
	while (*head)
	{
		next = (**head).next;
		(**head).next = rev;
		rev = *head;
		*head = next;
	}

	*head = rev;

	return (*head);
}
