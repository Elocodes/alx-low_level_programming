#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *j = malloc(b);

	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
