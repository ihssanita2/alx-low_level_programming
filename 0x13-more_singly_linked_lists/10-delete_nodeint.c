#include "lists.h"
unsigned int struct_len(listint_t **h);
/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list.
 * @head: pointer to the pointer to the linked list.
 * @index: is the index of the list that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Variables declaration section :*/
	listint_t *tmp, *tmp2;
	unsigned int size_node = 0, i = 0;
	/* Code section :*/
	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	size_node = struct_len(head);
		if (index == 0)
		{
		*head = tmp->next;
			free(tmp);
			return (1);
		}
		if (index > size_node)
		{
			return (-1);
		}
		if (index < size_node)
		{
			while (tmp != NULL)
			{
				if (i == (index - 1))
				{
					tmp2 = tmp->next;
					tmp->next = tmp2->next;
					free(tmp2);
					return (1);
				}
				i++;
				tmp = tmp->next;
			}
		}
return (-1);
}
/**
 * struct_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to linked lists.
 * Return: the number of nodes.
 */
unsigned int struct_len(listint_t **h)
{
	/* Variables declaration section :*/
	unsigned int nbr_of_nodes = 0;
	listint_t *tmp;
	/* Code section :*/
	if (*h == NULL)
		return (0);
	tmp = *h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nbr_of_nodes++;
	}
	printf("%d\n", nbr_of_nodes);
	return (nbr_of_nodes);
}
