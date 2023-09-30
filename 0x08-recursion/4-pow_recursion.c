#include "main.h"
/**
* _pow_recursion - bla bla bla
* @x: bla bla bla
* @y: bla bla bla
* 
* Return: bla bla bla
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (x ^ _pow_recursion(x, y - 1));
}