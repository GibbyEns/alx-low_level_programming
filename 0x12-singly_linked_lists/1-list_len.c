#include <stdlib.h>
#include "lists.h"

/**
 * list_len - It returns the number of elems in the linked list
 * @h: The pointer to the list_t list
 *
 * Return: Successful, number of elems in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

