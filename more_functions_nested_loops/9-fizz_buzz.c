#include <stdio.h>

/**
* main - affiche nombre de 0 a 100, remplace multiple de 3 par Fizz,
*        multiples de 5 par Buzz, et multiples des 2 par FizzBuzz
*
* Return: 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
printf(" ");
else
printf("\n");
}
return (0);
}
