#include "3-calc.h"

/**
 * op_add - retourne somme de a et b
 * @a: 1er entier
 * @b: 2eme entier
 * Return: somme de a et b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - retourne diff entre a et b
 * @a: 1er entier
 * @b: 2eme entier
 * Return: diff entre a et b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - retourne produit de a et b
 * @a: 1er etier
 * @b: 2eme entier
 * Return: produit de a et b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retourne resultat de la div de a par b
 * @a: 1er entier
 * @b: 2eme entier
 * Return: resultat de a div par b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - retourne le reste de la div de a par b
* @a: 1er entier
* @b: 2eme entier
* Return: reste de a diviser par b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
