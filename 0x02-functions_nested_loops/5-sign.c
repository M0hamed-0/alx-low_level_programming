#include "main.h"
/**
 * print_sign - his fucntion prints the alphabet from a to z
 *
 * @n: edfwfef
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
