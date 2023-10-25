#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: first element of the list
 * Return: NULL, if error
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
