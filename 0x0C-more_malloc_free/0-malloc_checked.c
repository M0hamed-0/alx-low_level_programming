#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - bla bla bla
 * @b: bla bla bla
 * Return: bla
 */
void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);
if (x == NULL)
{
exit(98);
}
return (x);
}
