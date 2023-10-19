#include "lists.h"
/**
 * print_list - prints bla bla
 * @h: head
 * Return: n of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}
