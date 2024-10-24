#include "main.h"

/**
* print_alphabet_x10 - imprime alphabet 10x en minuscule suivi d un saut de ligne
*/
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
