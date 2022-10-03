#include <stdio.h>
#include <stdlib.h>

/**
 * main - function takes argc and argv
 *@argc: contains the number of arguments passed unto the compiler
 *@argv: contains the argument strings or word passed unto the compiler
 *
 * Return: sum of argv
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
