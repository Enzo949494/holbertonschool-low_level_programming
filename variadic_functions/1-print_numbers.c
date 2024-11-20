#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - imprime nombres suivi nouvelle ligne
 * @separator: chaine a imprimer entre nombres (peut etre NULL)
 * @n: nombres d entier passe a la fonction
 * @...: nombres de variables a imprimer
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
