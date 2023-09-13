#include "main.h"
/**
 * print_alphabet_x10 - his fucntion prints the alphabet from a to z
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x;
int ch;
for (x = 1; x <= 10; x++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{

_putchar(ch);
}
_putchar('\n');
}
}
