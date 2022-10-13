#include <stdio.h>

/**
 * array_iterator - function calls the function that prints array
 *@array: array as passed by main function
 *@size: size of array
 *@action: pointer to the print function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	if (action == NULL || array == NULL)
		return;
	for (j = 0; j < (int)size; j++)
		action(array[j]);
}
