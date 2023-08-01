#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: head of the linked list
 * Return: head node's data (n) or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
