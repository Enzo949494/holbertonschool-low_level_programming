#include "main.h"

/**
* _isdigit - verfifie si caractere est un chiffre
* @c: caractere controler
* Return: 1 si c est un chiffre , sinon 0
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
