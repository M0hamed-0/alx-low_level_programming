#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - bla bla bla
 * @age: bla
 * @owner: bla
 * @name: howhow
 * Return: bla
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
x = malloc(sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}
	return (NULL);
	(*x).name = malloc(strlen(name) + 1);
	(*x).owner = malloc(strlen(owner) + 1);
	(*x).age = age;

	if ((*x).name == NULL)
	{
		free(x);
		return (NULL);
	}

	if ((*x).owner == NULL)
	{
		free(x);
		free((*x).name);
		return (NULL);
	}

	strcpy((*x).name, name);
	strcpy((*x).owner, owner);

	return (x);
}
