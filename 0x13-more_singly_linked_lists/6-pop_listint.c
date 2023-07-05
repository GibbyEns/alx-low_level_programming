#include "lists.h"

/**
 * pop_listint – It deletes the head node of a linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return: successful, the data inside the elem that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
