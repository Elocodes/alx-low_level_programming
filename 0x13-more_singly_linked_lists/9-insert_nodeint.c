#include "lists.h"

/**
 **insert_nodeint_at_index - function inserts node at nth position
 *@head: pointer to list
 *@idx: the nth position
 *@n: the new node's data. passed in main
 *
 * Return: returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *count_ptr;
	listint_t *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	count_ptr = *head;

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
