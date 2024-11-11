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
	unsigned int i;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	d = malloc(sizeof(char) * (i + 1));
	if (d == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	d[i] = str[i];
	d[i] = '\0';
	return (d);
}
