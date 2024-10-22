#include <stdio.h>

/**
* main - affiche chiffre de base 10 0 a 9
* Return: 0
*/
int main(void)
{
int chiffre;
for (chiffre = 0; chiffre < 10; chiffre++)
{
putchar(chiffre + '0');
}
putchar('\n');
return (0);
}
