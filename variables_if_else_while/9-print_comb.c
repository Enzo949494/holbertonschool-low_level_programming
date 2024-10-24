#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
* main - affiche combinaison possible nombres a 1 chiffres
* Return: 0
*/

int main(void)
{
int d = '0';
while (d <= '9')
{
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
d++;
}
}
putchar('\n');
return (0);
}
