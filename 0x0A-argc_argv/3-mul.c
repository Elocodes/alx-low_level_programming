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

	if (argc == 1 || argc == 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
