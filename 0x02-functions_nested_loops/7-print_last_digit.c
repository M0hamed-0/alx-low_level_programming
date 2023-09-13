#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - his fucntion prints the alphabet from a to z
 *
 * @n: edfwfef
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int LD;
if (n < 0)
{
LD = -1 * (n % 10);
}
else
LD = n % 10;
_putchar(LD + '0');
return (LD);
}
