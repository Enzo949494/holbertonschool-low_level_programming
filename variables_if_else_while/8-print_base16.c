#include <stdio.h>

/**
* main - affiche nombres de base 16 en minuscules
* Return: 0
*/

int main(void)
{
char hex_digit = '0';
while (hex_digit <= 'f')
{
putchar(hex_digit);
if (hex_digit == '9')
hex_digit = 'a' - 1;
hex_digit++;
}
putchar('\n');
return (0);
}
