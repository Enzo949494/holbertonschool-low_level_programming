#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatene 2 chaine
 * @s1: 1ere chaine
 * @s2: 2eme chaine
 * @n: nombres octets de s2 a cctn
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	while (s1[len1]) len1++;
	while (s2[len2]) len2++;
	if (n >= len2) n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL) return (NULL);

	for (i = 0; i < len1 + n; i++)
	concat[i] = i < len1 ? s1[i] : s2[i - len1];
	concat[i] = '\0';
	return (concat);
}