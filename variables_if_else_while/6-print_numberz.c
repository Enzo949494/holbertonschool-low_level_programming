#include <stdio.h>

/**
* main - affiche chiffre 0 a 9
* Return: 0
*/

int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
}
putchar('\n');
return (0);
}
