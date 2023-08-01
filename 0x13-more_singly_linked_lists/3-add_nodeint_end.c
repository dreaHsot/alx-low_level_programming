#include "lists.h"

/**
  * add_nodeint_end - adds node at the end of list
  * @head: head of list
  * @n: integer value of new node o be added
  * Return: adderss of new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = end;

	return (end);
}
