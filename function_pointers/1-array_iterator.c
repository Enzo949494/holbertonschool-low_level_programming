#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute fonction dans chaque element tableau
 * @array: pointeur vers tableau
 * @size: taille du tableau
 * @action: pointeur vers fonction a executer
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
