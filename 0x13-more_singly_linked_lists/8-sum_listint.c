#include "lists.h"
/**
 * sum_listint - Entry Point
 * @head: head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int all = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		all += head->n;
		head = head->next;
	}

	return (all);
}

