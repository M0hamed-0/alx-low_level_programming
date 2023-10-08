#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - bla bla bla
 * @nmemb: bla bla bla
 * @size: bla bla bla
 * Return: bla
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *x;
	unsigned int i;
	unsigned int y;

	if (size == 0)
		return (NULL);

	if (nmemb == 0)
		return (NULL);

	y = nmemb * size;

	x = malloc(y);


	if (x == NULL)
		return (NULL);

	for (i = 0; i < y; i++)
		*(x + i) = 0;

	return (x);
}
