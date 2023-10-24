#include "lists.h"
/**
 * get_nodeint_at_index - bla bla bla
 * @head: bla
 * @index: index
 * Return: bla
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int inidx = 0;




	temp = head;

	while (inidx < index)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
		inidx++;
	}

	return (temp);
}
