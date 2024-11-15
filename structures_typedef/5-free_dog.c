#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libere memoire allouer pour chien
 * @d: pointeur vers structure dog_t a free
 * Description: libere mem allouer pour struct dog_t et chaine nom et proprio
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
