#include <stdlib.h>

/**
 **_calloc - function creates a memory and alloctes an array to it
 *@nmemb: array
 *@size: array size
 *
 * Return: returns memory set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(mem) + i) = 0;
	return (mem);
}

