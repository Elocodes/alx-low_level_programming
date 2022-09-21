#include <string.h>
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array to print
 * @n: array's length
 *
 * return is exempted because function returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
