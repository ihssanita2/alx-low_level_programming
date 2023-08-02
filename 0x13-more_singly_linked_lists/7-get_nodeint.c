#include "lists.h"

/*ihssaneer*/
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the pointer to the linked list.
 * @index: the index of the node to return.
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Variables declaration section : */
	listint_t *tmp;
	unsigned int i = 0;
	/* code section : */
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	/* return section : */
	return (tmp);
}
