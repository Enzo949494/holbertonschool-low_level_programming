#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatene 2 chaine
 * @s1: 1ere chaine
 * @s2: 2eme chaine
 * Return: pointeur vers new emplacement s1s2, carctere nul,NULL si echec
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *c;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	c = malloc(len1 + len2 + 1);
	if (c == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (j = 0; j < len2; j++)
		c[len1 + j] = s2[j];
	c[len1 + len2] = '\0';
	return (c);
}
