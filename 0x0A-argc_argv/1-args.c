#include <stdio.h>

/**
 * main - function takes argc and argc
 *@argc: contains the number of arguments passed unto the compiler
 *@argv: contains the argument strings or word passed unto the compiler
 *
 * Return: prints argc of the function
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (*argv[0])
	{
		argc -= 1;
		printf("%d\n", argc);
	}
	return (0);
}
