#include "lists.h"

/**
 * list_len - returns the number of nodes in a list
 * @h: singly linked list
 * Return: number of nodes in singly linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}