#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise variable type struct dog
 * @d: pointeur vers structure dog a init
 * @name: nom chien
 * @age: age chien
 * @owner: nom proprio chien
 * Description: pointeur vers struct dog, init avec valeurs fournies
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
