#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - bla bla bla
 * @s1: bla bla bla
 * @s2: bla bla bla
 * Return: bla
 */
char *str_concat(char *s1, char *s2)
{

unsigned int x, y, a, b;
unsigned int c;
char *z;
c = x + y;

if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);

for (x = 0; s1[x] != '\0'; x++)
{
;
}

for (y = 0; s2[y] != '\0'; y++)
{
;
}

z = malloc(x + y + 1);
if (z == NULL)
return (NULL);

for (a = 0; a < x; a++)
z[a] = s1[a];

for (b = x; b < c; b++)
z[a + b] = s1[a + b];

z[c] = '\0';

return (z);
}
