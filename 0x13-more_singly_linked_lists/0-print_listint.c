#include "lists.h"

/**
  * print_listint - prints all the elements of listint_t
  * @h: head of the list
  * Return: number of nodes in the list printed
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t l = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		l++;
		tmp = tmp->next;
	}
	return (l);
}
