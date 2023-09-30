#include "main.h"
/**
* _prime - bla bla bla
*
* @n: bla bla bla
* @x: bla bla bla
* Return: bla bla bla
*/
int _prime(int n, int x)
{
if (x <= 0)
{
return (0);
}
if (x == 1)
{
return (1);
}
if (n % x == 0)
{
return (0);
}
return (_prime(n, x - 1));
}
/**
* is_prime_number - bla bla bla
*
* @n: bla bla bla
* Return: bla bla bla
*/
int is_prime_number(int n)
{
return (_prime(n, n / 2));
}
