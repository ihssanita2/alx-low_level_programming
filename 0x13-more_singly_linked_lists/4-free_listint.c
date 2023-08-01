#include "lists.h"

/*ihssaneer*/
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the pointer to the linked list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	/* Variables declaration section :*/
	listint_t *tmp;
	/* Code section :*/
	if (head == NULL)
		return;
	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

