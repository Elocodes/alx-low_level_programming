#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function that prints the last array as first
 *@a: pointer to array
 *@n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int arr_start;
	int temp;

	arr_start = 0;
	while (arr_start < n)
	{
		n--;
		temp = a[arr_start];
		a[arr_start] = a[n];
		a[n] = temp;
		arr_start++;
	}
}
