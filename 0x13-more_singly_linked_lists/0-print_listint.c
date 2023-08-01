#include "lists.h"

/*ihssaneer*/
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to linked lists.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	/* Variables declaration section :*/
	size_t nbr_of_nodes = 0;
	const listint_t *tmp;
	/* Code section :*/
	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nbr_of_nodes++;
	}
	return (nbr_of_nodes);
}
