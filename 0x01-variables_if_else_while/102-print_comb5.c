#include <stdio.h>
/**
 * main - ssss
 *
 * Description: sssss
 *
 * Return: ssssss
*/
int main(void) 
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
