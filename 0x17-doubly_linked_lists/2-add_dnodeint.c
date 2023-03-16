#include "lists.h"

/**
 * *add_dnodeint - function adds a new node to the beginning
 * of struct dlistint_t
 *@head: pointer to the pointer of the node element
 *@n: the data of the new node
 *
 * Return: returns the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/**
	 * append new node in front of head making
	 * its "next" a pointer to the former head,
	 * which makes that head the end node now.
	 * new_node is the first now, so it gets
	 * assigned the title of head. now when
	 * head is called, it prints what is in new_node
	 */
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
