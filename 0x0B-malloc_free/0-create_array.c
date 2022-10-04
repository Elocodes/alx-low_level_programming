#include <stdlib.h>
#include <stdio.h>

/**
 **create_array - function allocates dynamic memory for the array
 *based on its type and size
 *@size: length of array
 *@c: array. note that the memory is created in arr which
 *serves as a pointer to the array c. hence the arr[i] = c
 *
 * Return: returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
