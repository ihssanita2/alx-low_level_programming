#include "lists.h"
/*ihssaneer*/
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the pointer to the linked list.
 * Return: returns the head node’s data (n) if empty return 0.
 */
int pop_listint(listint_t **head)
{
	/* Variables declaration section :*/
	int rmv;
	listint_t *tmp;
	/* Code section :*/
	if (head == NULL || *head == NULL)
		return (0);
	rmv = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (rmv);
}
