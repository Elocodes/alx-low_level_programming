#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n = 'A';

	while (n <= 'Z')
	{
		putchar(tolower(n));
		n++;
	}
	for (n = 'A'; n <='Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
	
}
