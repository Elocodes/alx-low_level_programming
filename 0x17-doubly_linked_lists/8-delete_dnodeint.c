#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *count_ptr;
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	count_ptr = *head;

	while (count_ptr != NULL)
	{
		count_ptr = count_ptr->next;
		count += 1;
		if (count == (index - 1))
		{
			temp = count_ptr;
			count_ptr = count_ptr->next;
			free(temp);
			/*new_node->next = count_ptr->next;
			count_ptr->next = new_node;*/
		}
	}
	if ((count_ptr->next == NULL) && (count != index))
	{
		return (-1);
	}
	return (0);
}
