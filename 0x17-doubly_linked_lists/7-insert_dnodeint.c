#include "lists.h"

/**
 **insert_dnodeint_at_index - function inserts node at nth position
 *@h: pointer to list
 *@idx: the nth position
 *@n: the new node's data. passed in main
 *
 * Return: returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *count_ptr;
	dlistint_t *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	count_ptr = *h;

	while (count_ptr != NULL)
	{
		count_ptr = count_ptr->next;
		count += 1;
		if (count == (idx - 1))
		{
			new_node->next = count_ptr->next;
			count_ptr->next = new_node;
		}
	}
	if ((count_ptr->next == NULL) && (count != idx))
	{
		return (NULL);
	}
	return (count_ptr->next);
}
