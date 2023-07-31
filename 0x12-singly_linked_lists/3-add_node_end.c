#include "lists.h"

/*ihssaneer*/
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to linked lists.
 * @str: the string to duplicate.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Variables declaration section :*/
	int i = 0;
	list_t *ptr_new_node, *tmp;
	/* Code section :*/
	if (head == NULL)
		return (NULL);
	ptr_new_node = (list_t *) malloc(sizeof(list_t));
	if (ptr_new_node == NULL)
		return (NULL);
	ptr_new_node->str = strdup(str);
	if (ptr_new_node->str == NULL)
	{
		free(ptr_new_node);
		return (NULL);
	}
	else
	{
	while (ptr_new_node->str[i] != '\0')
		i++;
	}
	ptr_new_node->len = i;
	ptr_new_node->next = NULL;
	if (*head == NULL)
	{
	*head = ptr_new_node;
	return (ptr_new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr_new_node;
	return (ptr_new_node);
}
