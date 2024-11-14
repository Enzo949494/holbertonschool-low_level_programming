#include <stdio.h>
#include "dog.h"

/**
 * print_dog - imprime info struct dog
 * @d: pointeur vers struct dog a imprimer
 *
 * Description: fonction imprime infos chien
 * si elements NULL, imprime nil
 * si d est NULL, imprime rien
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
