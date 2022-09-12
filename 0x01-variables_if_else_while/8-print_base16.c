#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char q;

	for (q = 48; q <= 57; q++)
	{
		putchar(q);
	}
	for (q = 'A'; q <= 'F'; q++)
	{
		putchar(tolower(q));
	}
	putchar('\n');
	return (0);
}
