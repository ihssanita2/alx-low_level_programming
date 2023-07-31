#include "lists.h"

/*ihssaneer*/
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to linked lists.
 * @str: the string to duplicate.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Variables declaration section :*/
	int i = 0;
	list_t *ptr_new_node;
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
	ptr_new_node->next = *head;
	*head = ptr_new_node;
	return (ptr_new_node);
}
