#include "main.h"

/**
 * _puts_recursion - imprime une chaine suivi saut de ligne, recursion
 * @s: chaine a imprimer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}