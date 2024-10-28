#include "main.h"

/**
* _isupper - affiche caractere en majuscule
* @c: caractere controler
* Return: 1 si c est majuscule , sinon 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
