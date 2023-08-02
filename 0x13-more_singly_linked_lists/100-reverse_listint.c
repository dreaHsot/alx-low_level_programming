#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: head of list
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
