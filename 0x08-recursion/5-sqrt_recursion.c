#include "main.h"
/**
* _sqrt - bla bla bla
*
* @n: bla bla bla
* @x: bla bla bla
* Return: bla bla bla
*/
int _sqrt(int n, int x)
{
if (x * x == n)
{
return (x);
}
if (x * x > n)
{
return (-1);
}
return (_sqrt(n, x + 1));
}
/**
* _sqrt_recursion - bla bla bla
*
* @n: bla bla bla
* Return: bla bla bla
*/
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (_sqrt(n, 1));
}

