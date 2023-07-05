#include "lists.h"

/**
 * print_listint - This prints all the elems of a linked list
 * @h: The linked list of type listint_t to be printed
 *
 * Return:Successful, the  number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
