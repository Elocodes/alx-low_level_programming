#include <stdio.h>

/**
 * print_chessboard - function that prints an 8 by 8 array
 * when j hits 7th column, next row is started
 *@a: pointer to array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			if (a[j] == a[7])
			{
				putchar('\n');
			}
		}
		continue;
	}
}
