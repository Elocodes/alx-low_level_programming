#include "main.h"

/**
 * main - prints the word _putchar using the putchar command
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char j[] = "_putchar";
	int c;

	for (c = 0; c <= 8; c++)
	{
		_putchar(j[c]);
	}
	_putchar('\n');
	return (0);
}
