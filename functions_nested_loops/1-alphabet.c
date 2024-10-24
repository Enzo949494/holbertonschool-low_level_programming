#include "main.h"

/**
* print_alphabet - imprime alphabet en minuscule , suivi dun saut de ligne
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
