#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char y;

	for (y = 'Z'; y >= 'A'; y--)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}
