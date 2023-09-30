#include "main.h"
/**
* factorial - bla bla bla
* @n: bla bla bla
*
* Return: bla bla bla
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
