#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: Always (0) Success
 */
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
