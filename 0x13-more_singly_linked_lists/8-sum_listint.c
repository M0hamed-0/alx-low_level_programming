#include "lists.h"
/**
 * sum_listint - bla bla bla
 * @head: bla
 * Return: bla
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	const listint_t *temp;

	if (!head)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
