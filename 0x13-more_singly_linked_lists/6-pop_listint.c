#include "lists.h"

/**
 * pop_listint - function deletes first node
 * in the linked list and sets temp to NULL
 *@head: pointer to nodes
 *
 * Return: returns the data of the initial head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	data = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (data);
}
