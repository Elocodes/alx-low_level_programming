#include <stdio.h>
#include <string.h>

/**
 *_print_rev_recursion - a function that swaps and prints a string in reverse
 *@s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
