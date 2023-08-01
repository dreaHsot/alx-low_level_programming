#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: head of list
  * Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
