#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - bla bla bla
 * @size: bla bla bla
 * @c: bla bla bla
 * Return: bla
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;

if (size == 0)
{
return (NULL);
}

x = malloc(sizeof(char) * size);


if (x == NULL)
{
return (NULL);
}



for (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}
