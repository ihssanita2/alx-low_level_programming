#include "lists.h"

/*ihssaneer*/
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to linked lists
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
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
		if (tmp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		nbr_of_nodes++;
		tmp = tmp->next;
	}
	return (nbr_of_nodes);
}
