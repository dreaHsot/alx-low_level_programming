#include "lists.h"

/**
  * get_nodeint_at_index - finds the nth node of a linked list
  * head: head of the list
  * index: index of the node, starting at 0
  * Return: dsired node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head->next != NULL); i++)
		head = head->next;

	if (i < index)
		return (NULL);
	return (head);
}
