#include <stdio.h>
#include "main.h"

/**
 * main - imprime nom programme
 * @argc: nombre arguments ds ligne commande
 * @argv: tableau arguments commandes
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
