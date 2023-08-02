#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer to the linked list.
 * @idx: is the index of the list where the new node should be added.
 * @n: The number to be printed.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Variables declaration section :*/
	listint_t *new, *tmp;
	unsigned int i = 0;
	/* Code section :*/
	if (head == NULL)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL || idx == 0)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL && i < (idx - 1))
	{
	tmp = tmp->next;
	i++;
	}
	if (tmp->next == NULL && idx > i)
	{
		return (NULL);
	}
	else
	{
	new->next = tmp->next;
	tmp->next = new;
	}
	return (new);
}
