#include "main.h"

/**
* _islower - affiche caractere en minuscule
* c: caractere
*
* Return: 1 si c est minuscule , sinon 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
