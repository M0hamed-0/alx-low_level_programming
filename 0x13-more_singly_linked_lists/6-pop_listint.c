#include "lists.h"
/**
 * pop_listint - bla bla bla
 * @head: bla
 * Return: bla
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n2;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	n2 = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n2);
}
