#include "lists.h"

/**
 * *add_dnodeint_end - function adds a new node to the end
 * of struct listint_t
 *@head: pointer to the pointer of the node element
 *@n: the data of the new node
 *
 * Return: returns the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr2last = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/**
	 * Description - for easy visualization, consider
	 * each node appended after head as the last attached
	 * head-file. if this file meets an empty head, it
	 * simply becomes the head. if not empty, the last
	 * head's next stores the address of the new node
	 * that is becomes a pointer to it
	 */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (ptr2last->next != NULL)
	{
		ptr2last = ptr2last->next;
	}
	ptr2last->next = new_node;
	return (ptr2last);
}
