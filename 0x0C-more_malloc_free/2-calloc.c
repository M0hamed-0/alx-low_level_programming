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

	unsigned int *x = 0;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (nmemb == 0)
	{
		return (NULL);
	}


	x = malloc(nmemb * size);
	if (x == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		x[i] = '0';
	}
	return (x);

}
