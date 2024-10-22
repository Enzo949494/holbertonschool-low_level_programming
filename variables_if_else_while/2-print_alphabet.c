#include <stdio.h>

/**
* main - affiche alphabet minuscules
* Return: 0
*/
int main(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
putchar(lettre);
}
putchar('\n');

return (0);
}
