#include "lists.h"

/**
 * free_dlistint - function frees memory used by nodes
 * in the linked list
 *@head: pointer to nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
