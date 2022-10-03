#include <stdio.h>
#include <stdlib.h>

/**
 * main - function takes argc and argv
 *@argc: contains the number of arguments passed unto the compiler
 *@argv: contains the argument strings or word passed unto the compiler
 *
 * Return: multiplication of argv 1 and 2
 */
int main(int argc, char *argv[])
{
	int a, b;
	int multiplication;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multiplication = a * b;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", multiplication);
	}
	return (0);
}
