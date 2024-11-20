#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - imprime des chaines suivi d une nouvelle ligne
 * @separator: chaine a imprimer enre les chaines(peut etre NULL)
 * @n: nombres de chaines passees a la fonctions
 * @...: chaines variables a imprimer
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
