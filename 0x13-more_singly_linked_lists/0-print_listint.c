#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *@h: pointer to the struct containing the elements
 * struct is defined in list.h
 * Return: returns the number of element printed
 *
 * Description - if NULL is passed to the print list function,
 * nothing is returned, else, the while loop prints the data in the node
 * provided its pointer part is not null.
 * it repeats loop until h meets the node that ends
 * the linked list with pointer part being null
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
