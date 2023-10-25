#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
