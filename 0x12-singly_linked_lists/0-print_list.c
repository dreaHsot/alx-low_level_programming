#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a singly linked list of type list_t
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
