#include "lists.h"
/**
 * add_node_end - function that adds a new node at
 * the end of a list_t list.
 * @head: pointer to struct
 * @str: pointer to string
 * Return: the number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (!(*head))
		*head = ptr;

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}

	return (*head);
}
