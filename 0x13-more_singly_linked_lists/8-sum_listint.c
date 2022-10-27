#include "lists.h"

/**
 * sum_listint - function sums the data in nodes
 *
 *@head: pointer to list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *count_ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	count_ptr = head;

	while (count_ptr != NULL)
	{
		sum += count_ptr->n;
		count_ptr = count_ptr->next;
	}
	return (sum);
}
