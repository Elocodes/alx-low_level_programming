#include <stdio.h>

/**
 * print_name - function calls the function that prints name
 *@name: name as passed by main function
 *@f: pointer to the print function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
