#include <string.h>

/**
 **_memcpy - function copies n block of code from one memory space to another
 *@dest: memory area 1 to recive n block of code
 *@src: memory area from whose value will be set unto dest
 *@n: number of byte to be copied
 *
 * Return: returns the value of appended variable dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ValueADD;

	ValueADD = memcpy(dest, src, n);
	return (ValueADD);
}


