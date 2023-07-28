#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: head of the linked list
 * @str: string for the new node
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t l = 0;
	list_t *newNode;



	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[l] != '\0')
		l++;
	newNode->len = l;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
