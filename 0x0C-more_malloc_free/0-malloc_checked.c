#include <stdlib.h>

/**
 **malloc_checked - function allocates memory
 *@b: input
 *
 * Return: returns a pointer to the memory space
 */
void *malloc_checked(unsigned int b)
{
	void *j = malloc(b);

	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
