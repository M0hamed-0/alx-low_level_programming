#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - bla bla bla
 * @str: bla bla bla
 * Return: bla
 */
char *_strdup(char *str)
{
char *x;
unsigned int i;
unsigned int y;

for (i = 0; str[i] != "\0"; i++)
{
;
}

x = malloc(i + 1);
if (x == NULL)
{
return (NULL);
}

for (y = 0; y <= i; y++)
{
x[i] = str[i];
}
return (x);
}

