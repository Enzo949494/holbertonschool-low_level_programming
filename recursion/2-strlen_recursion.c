#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calcule longeur chaine
 * @s: chaine a mesurer
 * Return: longueur de chaine
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}