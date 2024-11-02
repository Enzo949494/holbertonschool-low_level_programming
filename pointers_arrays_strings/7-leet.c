#include "main.h"

/**
* leet - encode une chaine en nombre
*@str: chaine a encoder
* Return: pointeur vers chaine encodre
*/

char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char lett_numbers[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; lett_letters[j] != '\0'; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_numbers[j];
break;
}
}
}
return (str);
}