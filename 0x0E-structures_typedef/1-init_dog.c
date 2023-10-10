#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
 * init_dog - bla bla bla
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return (NULL);
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
