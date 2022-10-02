#include <stdio.h>

/**
 * main - function takes argc and argv
 *@argc: contains the number of arguments passed unto the compiler
 *@argv: contains the argument strings or word passed unto the compiler
 *
 * Return: prints all the arguments passed to the function
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
