#include "lists.h"

/**
 * free_listint2 - function frees memory used by nodes
 * in the linked list and sets head to NULL
 *@head: pointer to nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1;
	listint_t *temp2;

	temp1 = *head;

	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
	*head = NULL;
}
