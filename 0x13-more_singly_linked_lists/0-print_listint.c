#include "lists.h"
/**
 * print_listint - prints bla bla
 * @h: head
 * Return: n of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

		if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
