#include "main.h"

/**
 * _print_rev_recursion - imprime une chaine a l envers
 * @s: chaine a imprimer
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}