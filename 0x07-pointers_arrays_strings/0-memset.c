#include <string.h>

/**
 **_memset - function adds n block of code from one memory space to another
 *@s: memory area 1 to recive n block of code
 *@b: memory area from whose value will be set unto s
 *@n: number of byte to be set
 *
 * Return: returns a pointer to the appended variable s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *Valueset;

	Valueset = memset(s, b, n);
	return (Valueset);
}


