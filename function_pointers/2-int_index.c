#include "function_pointers.h"

/**
 * int_index - cherche un entier dans un tableau
 * @array: pointeur vers tableau
 * @size: nombre elements tableau
 * @cmp: pointeur fonction comparaison
 * Return: retourne indice 1er element fonction comp renvoi pas 0,
 *		   -1 si 0 elements marche ou si taille <=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
