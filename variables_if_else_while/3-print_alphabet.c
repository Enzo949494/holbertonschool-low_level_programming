#include <stdio.h>

/**
* main - affiche alphabet miniscules puis majuscules
* Return: 0
*/
int main(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
putchar(lettre);
for (lettre = 'A'; lettre <= 'Z'; lettre++)
putchar(lettre);
putchar('\n');
return (0);
}
