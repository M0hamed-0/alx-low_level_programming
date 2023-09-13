#include "main.h"
/**
 * _islower - his fucntion prints the alphabet from a to z
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c <= 'a' && c >= 'z')
return(1);
return(0);
}