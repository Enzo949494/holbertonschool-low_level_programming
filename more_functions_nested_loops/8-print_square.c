#include "main.h"

/**
* print_square - trace un carre
* @size: taille du carre
*/
void print_square(int size)
{
int row, col;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
