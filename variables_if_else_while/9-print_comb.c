#include <unistd.h>

/**
* main - affiche combinaison possible nombres a 1 chiffres
* Return: 0
*/

int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
j = i;
while (j < 10)
{
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
}
putchar('\n');
return (0);
}
