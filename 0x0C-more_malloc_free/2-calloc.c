#include <stdlib.h>

/**
 **_calloc - function creates a memory and alloctes an array to it
 *@nmemb: array
 *@size: array size
 *
 * Return: returns pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;
	unsigned int i;

	mem = malloc(sizeof(nmemb) * size);
	if (mem == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			mem[i] = nmemb;
		return (mem);
	}
	free(mem);
}

