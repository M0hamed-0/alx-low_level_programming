#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - bla bla bla
 * @min: bla bla bla
 * @max: bla bla bla
 * Return: bla
 */
int *array_range(int min, int max)
{

int *x;
int y;
int z = 0;
int a;
int b = 0;

if (min > max)
{
	return (NULL);
}

for (y = min; y < max; z++)
{
y++;
}

x = malloc(sizeof(int) * z + 1);
if (x == NULL)
{
	return (NULL);
}

for (a = min; a <= max; a++)
{
	x[b] = a;
	b++;
}

return (x);
}
