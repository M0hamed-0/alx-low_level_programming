#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointer to struct
 * @n: intger
 * Return: the number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (*head);
}
