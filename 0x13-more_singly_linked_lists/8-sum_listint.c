#include "lists.h"

/**
  * sum_listint - sum all the data, n of listint_t
  * @head: head of the linked list
  * Return: sum of all integers in the list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
