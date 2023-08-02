#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head : head of the linked list
 * Return: node address where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head;
	listint_t *h = head;

	while (h != NULL && h->next != NULL)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (h);
		}
	}

	return (NULL);
}
