#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: string to evaluate
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies the string pointed in s to d
 * @d: pointer to string destination
 * @s: source string
 * Return: pointer to d
 */

char *_strcpy(char *d, char *s)
{
	int l, i;

	l = _strlen(s);

	for (i = 0; i < l; i++)
		d[i] = s[i];
	d[i] = '\0';

	return (d);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
