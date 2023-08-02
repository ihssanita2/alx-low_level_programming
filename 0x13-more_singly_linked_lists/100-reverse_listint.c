#include "lists.h"

/*ihssaneer*/
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of the linked list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
/* Variables declaration section :*/
listint_t *p_ptr = NULL, *n_ptr = NULL;
/* Code section :*/
if (head == NULL || (*head) == NULL)
return (NULL);
while (*head != NULL)
{
n_ptr = (*head)->next;
(*head)->next = p_ptr;
p_ptr = *head;
*head = n_ptr;
}
*head = p_ptr;
return (*head);
}
