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
unsigned int *x;

x = malloc(b);
if (x == NULL)
{
exit(89);
}
return (x);
}
