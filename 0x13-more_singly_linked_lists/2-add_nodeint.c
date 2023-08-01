#include "lists.h"

/*ihssaneer*/
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the pointer to the linked list.
 * @n: The number to be printed.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Variables declaration section :*/
	listint_t *new;
	/* Code section :*/
	if (head == NULL)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
