#include <stdlib.h>
#include "main.h"

/**
 * _calloc - alloue memoire pour tableau
 * @nmemb: nombre elements
 * @size: taille elements
 * Return: pointeur vers memoire alluer, NULL si echec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	return (NULL);

	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}
