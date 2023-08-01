#include "lists.h"

/*ihssaneer*/
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to linked lists.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
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
		tmp = tmp->next;
		nbr_of_nodes++;
	}
	return (nbr_of_nodes);
}
