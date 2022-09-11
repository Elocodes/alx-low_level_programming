#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (n != 'E' && n != 'Q')
		{
			putchar(tolower(n));
		}
	}
	putchar('\n');
	return (0);
}
