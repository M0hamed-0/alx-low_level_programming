#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to struct
 * @n: pointer to integer
 * Return: the number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
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
