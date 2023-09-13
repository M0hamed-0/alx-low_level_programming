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
int min, hr;
for (hr = 0; hr <= 23; hr++)
{
for (min= 0; min <= 59; min++)
{
-putchar((hr / 10) + '0');
-putchar((hr % 10) + '0');
-putchar(':');
-putchar((min / 10) + '0');
-putchar((min % 10) + '0');
-putchar('\n');
}
}
}
