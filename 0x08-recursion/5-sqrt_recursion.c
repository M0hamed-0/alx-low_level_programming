#include "main.h"
/**
* _sqrt_recursion - bla bla bla
* _sqrt - bla bla bla
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
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (_sqrt(n, 1));
}

