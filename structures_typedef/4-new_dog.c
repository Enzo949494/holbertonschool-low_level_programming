#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Return: Pointeur vers le nouveau chien (dog_t) ou NULL en cas d'échec
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = (name != NULL) ? malloc(strlen(name) + 1) : NULL;
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	if (name != NULL)
		strcpy(d->name, name);

	d->owner = (owner != NULL) ? malloc(strlen(owner) + 1) : NULL;
	if (owner != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	if (owner != NULL)
		strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
