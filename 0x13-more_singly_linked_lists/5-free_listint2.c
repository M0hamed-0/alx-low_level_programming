#include "lists.h"
/**
 * free_listint2 - bla bla bla
 * @head: bla
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = (*head)->next;
		free(*head);
		head = NULL;
	}
}