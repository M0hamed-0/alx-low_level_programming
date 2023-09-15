#include "main.h"
/**
 * print_triangle - blablabla
 *
 * @size: blablabla
 *
 * Description: blablabla
 *
 * Return: blablabla
 */
void print_triangle(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
return;
}
for (x = 0; x < size; x++)
{
for (y = 0; y < size - y - 1; y++)
{
putchar(' ');
}
for (y = 0; y < x + 1; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
