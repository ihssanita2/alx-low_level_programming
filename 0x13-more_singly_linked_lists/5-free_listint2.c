#include "lists.h"

/*ihssaneer*/
/**
 * free_listint2 - frees a listint_t list & sets the head to NULL.
 * @head: pointer to the pointer to the linked list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	/* Variables declaration section :*/
	listint_t *tmp;
	/* Code section :*/
	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
