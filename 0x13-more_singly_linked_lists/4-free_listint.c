#include "lists.h"
/**
 * free_listint - bla bla bla
 * @head: bla
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
