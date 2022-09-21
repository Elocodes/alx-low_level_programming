#include <string.h>
#include <stdio.h>

/**
 * print_rev - function prints a string in reverse when called
 * @s: character to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int reverse;

	for (reverse = strlen(s) - 1; reverse >= 0; reverse--)
	{
		putchar(s[reverse]);
	}
	putchar('\n');
}
