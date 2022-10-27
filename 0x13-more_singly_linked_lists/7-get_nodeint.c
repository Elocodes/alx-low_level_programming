#include "lists.h"

/**
 **get_nodeint_at_index - function gets node at a given index
 *@head: pointer to list
 *@index: node position
 *
 * Return: returns node at the index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *count_ptr;
	listint_t *store;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	count_ptr = head;

	while (count_ptr != NULL)
	{
		count_ptr = count_ptr->next;
		count += 1;
		if (count == index)
		{
			store = count_ptr;
			break;
		}
	}
	if ((count_ptr->next == NULL) && (count != index))
	{
		return (NULL);
	}
	return (store);
}
