#include "lists.h"
/**
 * free_list - bla bla bla
 * @head: bla
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->n);
		free(head);
		head = ptr;
	}
}
