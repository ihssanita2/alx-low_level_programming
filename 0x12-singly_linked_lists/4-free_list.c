#include "lists.h"

/*ihssaneer*/
/**
 * free_list - frees a list_t list.
 * @head: pointer to linked lists.
 * Return: Void.
 */
void free_list(list_t *head)
{
	/* Variables declaration section :*/
	list_t *tmp;
	/* Code section :*/
	if (head == NULL)
		return;
	while (head != NULL)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
