#include <stdlib.h>
#include "main.h"

/**
 * _strdup - pointeur vers new espace memoire,contient copie chaine
 * @str: chaine a copier
 * Return: pointeur vers chaine dupiquer, NULL si echec
 */

char *_strdup(char *str)
{
	char *d;
	int len, i;

	if (str == NULL)
	return (NULL);

	for (len = 0; str[len]; len++)
	{
	d = malloc(sizeof(char) * (len + 1));
	if (d == NULL)
	return (NULL);
	}

	for (i = 0; i < len; i++)
	d[i] = str[i];
	return (d);
}
