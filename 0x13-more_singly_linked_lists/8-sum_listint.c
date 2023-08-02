#include "lists.h"

/*ihssaneer*/
/**
 * sum_listint - returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: pointer to linked lists.
 * Return: if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	/* Variables declaration section :*/
	int sum_data = 0;
	listint_t *tmp;
	/* Code section :*/
	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum_data += tmp->n;
		tmp = tmp->next;
	}
	return (sum_data);
}
