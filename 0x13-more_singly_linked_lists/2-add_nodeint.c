#include "lists.h"

/**
  * add_nodeint - adds new node at the beginning of a list
  * @head: head of the list
  * @n: integer value to be added to list
  * Return: address of new node or NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
