#include "main.h"
#include <stdio.h>

int is_prime_helper(int n, int i);

/**
 * is_prime_number - verfifie si nombre premier
 * @n: nombre a controler
 * Return: 1 si premier , 0 si non
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - verfie si nombre premier
 * @n: nombre a verif
 * @i: diviseur a verifier
 *
 * Return: 1 si premier, sinon 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	return (1);
	if (n % i == 0)
	return (0);
	return (is_prime_helper(n, i + 1));
}
