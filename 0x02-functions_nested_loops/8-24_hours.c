#include "main.h"
/**
 * jack_bauer - his fucntion prints the alphabet from a to z
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int m, h;
for (h = 0; h <= 23; h++)
{
for (m= 0; m < 59; m++)
{
-putchar((h / 10) + 48);
-putchar((h % 10) + 48);
-putchar(':');
-putchar((m / 10) + 48);
-putchar((m % 10) + 48);
-putchar('\n');
}
}
}
