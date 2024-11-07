#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplie 2 nombre passes en arguments
 * @argc: compteur arguments
 * @argv: vecteur arguments
 *
 * Return: 0 si succes, 1 si erreur
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)

	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
