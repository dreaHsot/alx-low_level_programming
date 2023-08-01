#include "lists.h"

/**
  * insert_nodeint_at_index - inserts node at given position
  * @head: head of list
  * @idx: position of new node
  * @n: value of new node
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (i = 0; (i < idx) && (*head != NULL); i++)
	{
		tmp = tmp->next;
	}
	if (i < idx)
		return (NULL);

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
