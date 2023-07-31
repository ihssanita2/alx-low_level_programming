#include "lists.h"

/*ihssaneer*/
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to linked lists
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	/* Variables declaration section :*/
	size_t nbr_of_nodes = 0;
	const list_t *tmp;
	/* Code section :*/
	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		nbr_of_nodes++;
		tmp = tmp->next;
	}
	return (nbr_of_nodes);
}
