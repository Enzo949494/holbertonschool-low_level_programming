#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloue memoire avec malloc
 * @b: nombre octet a allouer
 * Return: pointeur vers memoire allouer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
