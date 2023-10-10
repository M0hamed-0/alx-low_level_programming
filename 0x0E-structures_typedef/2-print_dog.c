#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - bla bla bla
 * @d: dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}

	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}

		else
		{
		printf("Name: %c\n", d->name);
		}


		printf("Age: %f", d->age);


		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}

		else
		{
			printf("Owner: %c", d->owner);
		}
	}
}
