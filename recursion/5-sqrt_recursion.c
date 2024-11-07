#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - calcule racine carre recursivement
 * @n: nombre a calculer racine carre
 * @i: estimation actuelle
 *
 * Return: racine carre de n, -1 si existe pas
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - donne racine carre d un nombre
 * @n: nombre a calculer
 * Return: racine carre de n , -1 si existe pas
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}
