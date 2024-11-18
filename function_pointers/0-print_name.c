#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - imprime un nom en utilisant une fonction pointer
 * @name: nom a imprimer
 * @f: fonction a utiliser pour imprimer
 * Return: rien
 */

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
		f(name);
}
