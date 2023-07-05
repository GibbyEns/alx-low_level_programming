#include "lists.h"

/**
 * add_nodeint_end - Thisadds a node at the end of the linked list
 * @head:The pointer to the first elem in the list
 * @n:The data to insert in the new elem
 *
 * Return:Successful, The pointer to the new node,if not, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
