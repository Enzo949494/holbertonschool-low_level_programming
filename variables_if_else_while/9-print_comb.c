#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
* main - affiche combinaison possible nombres a 1 chiffres
* Return: 0
*/



int main(void)
{
    int n = 0;

    while (n <= 9)
    {
        putchar(n + '0');
        if (n != 9)
        {
            putchar(',');
            putchar(' ');
        }
        n++;
    }
    putchar('\n');

    return (0);
}
