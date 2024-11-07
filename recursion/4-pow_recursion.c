#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - retourne valeur x eleve puissance y
 * @x: nombre de base
 * @y: exposant
 * Return: resultat de x^y, ou -1 si y negatif
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if  (y == 0)
	{
		return  (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
