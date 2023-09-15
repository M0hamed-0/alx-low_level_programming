#include "main.h"
/**
 * print_line - blablabla
 *
 * @n: blablabla
 *
 * Description: blablabla
 *
 * Return: blablabla
 */
void print_diagonal(int n)
{
int x;
int y = 0;
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
