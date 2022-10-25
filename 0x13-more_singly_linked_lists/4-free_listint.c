#include "lists.h"

/**
 * free_listint - function frees memory used by nodes
 * in the linked list
 *@head: pointer to nodes
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
