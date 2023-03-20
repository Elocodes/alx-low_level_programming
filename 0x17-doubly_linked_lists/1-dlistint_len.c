#include "lists.h"

/**
 * dlistint_len - prints all the elements of a list
 *@h: pointer to the struct containing the elements
 * struct is defined in list.h
 * Return: returns the number of nodes in the list
 *
 * Description - if NULL is passed to the print list function,
 * nothing is returned, else, the while loop increments the number of
 * nodes passed.
 * it repeats loop until h meets the node that ends
 * the linked list with pointer part being null
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
