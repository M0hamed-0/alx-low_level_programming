#include "main.h"
/**
 * times_table - his fucntion prints the alphabet from a to z
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
void times_table(void)
{
int n, m, p;
for (n = 0; n <= 9; n++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
p = n * m;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
