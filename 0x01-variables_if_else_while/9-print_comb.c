#include <stdio.h>
/**
 * main - main
 *
 * Description: Description
 *
 * Return: Return
*/
int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
