#include "main.h"

/**
 * _strchr - trouve chaine de caractere
 * @s: chaine a trouver
 * @c: caractere a trouver
 * Return: si c est trouver, pointeur vers premiere instance
 *         NULL si rien trouver
 */

char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] >= '\0'; i++)
    {
        if (s[i] == c)
            return (s + i)
    }

    return (0);
}
