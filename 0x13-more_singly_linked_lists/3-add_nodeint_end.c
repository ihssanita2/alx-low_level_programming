#include "lists.h"

/*ihssaneer*/
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer to the linked list.
 * @n: The number to be printed.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Variables declaration section :*/
	listint_t *new, *tmp;
	/* Code section :*/
	if (head == NULL)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}

