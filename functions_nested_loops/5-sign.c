#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the int to check
*
* Return: 1 et imprime + si n est plus grand que 0
*         0 et imprime 0 si n = zero
*         -1 et imprime  - si n inferieur 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
