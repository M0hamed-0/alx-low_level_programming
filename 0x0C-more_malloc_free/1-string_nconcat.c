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
char *x;
unsigned int size1 = 0;
unsigned int size2 = 0;
unsigned int a;
unsigned int b;

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

if (n >= size2)
n = size2;

x = malloc(sizeof(char) * (size1 + n + 1));
if (x == NULL)
return (NULL);


for (a = 0; a < size1; a++)
{
x[a] = s1[a];
}

for (b = 0; b < n; b++)
{
x[a + b] = s2[b];
}
x[a + b] = '\0';

return (x);
}
