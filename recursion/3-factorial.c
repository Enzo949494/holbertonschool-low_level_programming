#include "main.h"
#include <stdio.h>

/**
 * factorial - return le factoriel d un nombre
 * @n: nombre a calculer factoriel
 * Return: factoriel de n, -1 si n est negatif
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
