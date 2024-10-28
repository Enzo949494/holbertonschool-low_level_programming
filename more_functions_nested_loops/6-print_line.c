#include "main.h"

/**
* print_line - trace une ligne droite
* @n: nombre de fois ou caractere _ est afficher
*/

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
