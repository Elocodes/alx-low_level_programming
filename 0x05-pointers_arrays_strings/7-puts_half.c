#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints second half of a string
 * @str: the string input
 *
 * return is exempted because function returns nothing
 */
void puts_half(char *str)
{
	int i, n;

	n = (strlen(str) - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
