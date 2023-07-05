#include "lists.h"

/**
 * reverse_listint – It reverses a linked list
 * @head: The pointer to the first node in the list
 *
 * Return: Successful,  pointer to the first node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
