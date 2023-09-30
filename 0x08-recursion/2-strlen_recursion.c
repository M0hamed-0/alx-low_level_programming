#include "main.h"
/**
* _strlen_recursion - bla bla bla
* @s: bla bla bla
* return: bla bla bla
*/
int _strlen_recursion(char *s)
{
int SL = 0;
if (*s)
{
SL++;
SL += _strlen_recursion(s + 1);
}
return (SL);
}
