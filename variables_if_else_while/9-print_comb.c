#include <unistd.h>

/**
* main - affiche combinaison possible nombres a 1 chiffres
* Return: 0
*/

int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
