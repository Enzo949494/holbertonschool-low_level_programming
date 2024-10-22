#include <stdio.h>

/**
* main - affiche chiffre 0 a 9
* Return: 0
*/

int main(void)
{
int letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
