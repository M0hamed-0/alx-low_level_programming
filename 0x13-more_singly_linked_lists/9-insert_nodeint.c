#include "lists.h"
/**
 * insert_nodeint_at_index - bla bla bla
 * @head: bla
 * @idx: index
 * @n: idk wtf this dose yet
 * Return: bla
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int inidx = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	temp = *head;

	if (idx == 0)
	{
		new_node->next = temp;
		(*head)  = new_node;
		return (new_node);
	}

	while (inidx < idx - 1)
	{
		if ((*head) == NULL || (*head)->next == NULL)
			return (NULL);

		temp = temp->next;
		inidx++;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
