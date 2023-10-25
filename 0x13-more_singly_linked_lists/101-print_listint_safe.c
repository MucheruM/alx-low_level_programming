#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n, *l_n;
	size_t node_num, next_node;

	tmp_n = NULL;
	l_n = NULL;
	tmp_n = head;
	node_num = 0;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		node_num++;
		tmp_n = tmp_n->next;
		l_n = head;
		next_node = 0;
		while (next_node < node_num)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (node_num);
			}
			l_n = l_n->next;
			next_node++;
		}
		if (!head)
			exit(98);
	}
	return (node_num);
}
