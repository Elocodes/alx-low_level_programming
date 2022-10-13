#include <stddef.h>

/**
 * int_index - function compares array values
 *@array: array
 *@size: size of array
 *@cmp: pointer to array value function
 *
 * Return: returns the first index of value if not
 * matched with array value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
