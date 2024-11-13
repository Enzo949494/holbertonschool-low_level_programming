#include "main.h"
#include <stdlib.h>

/**
 * array_range - creer tableau d entier
 * @min: valeur mini
 * @max: valeur max
 * Return: pointeur vers new tabl,NULL si echec
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
