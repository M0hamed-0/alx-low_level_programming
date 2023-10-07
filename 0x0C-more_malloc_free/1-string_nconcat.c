#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - bla bla bla
 * @s1: bla bla bla
 * @s2: bla bla bla
 * @n: bla bla bla
 * Return: bla
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int *x;
unsigned int size1 = 0;
unsigned int size2 = 0;
unsigned int sizex;
unsigned int a;
unsigned int b;
unsigned int c;
unsigned int d;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";


while (s1[size1] != '\0')
{
size1++;
}

while (s2[size2] != '\0')
{
size2++;
}

sizex = size1 = size2;

x = malloc(sizex + 1);
if (x == NULL)
return (NULL);


if (n >= size2)
{
for (c = 0; c < size1; c++)
{
x[c] = s1[c];
}

for (d = 0; d < sizex; d++)
{
x[c + d] = s2[d];
d++;
}

x[sizex] = '\0';
return (x);
}
exit(0);


for (a = 0; a < size1; a++)
{
x[a] = s1[a];
}

for (b = 0; b < n; b++)
{
x[a + b] = s2[b];
}
x[sizex] = '\0';

return (x);
}
