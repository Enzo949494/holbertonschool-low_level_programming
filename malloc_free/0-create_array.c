#include "main.h"
#include <stdlib.h>

/**
 * create_array - creer un tableau char ,initialise specific char
 * @size: taille du tableau a creer
 * @c: char specific initialiser
 * Return: pointeur vers tableau, NULL si echec ou 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
