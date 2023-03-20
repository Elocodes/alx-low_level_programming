#include "lists.h"

/**
 **get_dnodeint_at_index - function gets node at a given index
 *@head: pointer to list
 *@index: node position
 *
 * Return: returns node at the index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *count_ptr;
	dlistint_t *store;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	count_ptr = head;
	if (count == index)
	{
		return (count_ptr);
	}
	else
	{

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
}
