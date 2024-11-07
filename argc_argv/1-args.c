#include <stdio.h>

/**
 *main - affiche nombre arguments passes au programme
 *@argc: compteur arguments
 *@argv: vecteurs arguments ( non utilise ici)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
