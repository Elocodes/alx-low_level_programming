#include "search_algos.h"

/**
 * binary_search - function searches for a value using the linear search algo
 * @array: pointer to the first element of the array to search in
 * @size: num of elements in array
 * @value: value to search for
 * Return: returns first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int leftmost, rightmost, mid_num, i;

	if (array == NULL || size == 0)
		return (-1);
	leftmost = 0;
	rightmost = size - 1;
	while (leftmost <= rightmost)
	{
		mid_num = leftmost + ((rightmost - leftmost) / 2);

		printf("Searching in array: ");
		for (i = leftmost; i <= rightmost; i++)
		{
			printf("%d", array[i]);
			if (i < rightmost)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid_num])
		{
			return (array[mid_num]);
		}
		else if (value < array[mid_num])
			rightmost = mid_num - 1; /*value may be in lower half*/
		else
			leftmost = mid_num + 1;
	}
	return (-1);
}
