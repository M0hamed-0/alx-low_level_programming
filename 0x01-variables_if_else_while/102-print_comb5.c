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
int num1_tens, num1_ones, num2_tens, num2_ones;
for (num1_tens = 0; num1_tens <= 9; num1_tens++)
{
for (num1_ones = 0; num1_ones <= 9; num1_ones++)
{
for (num2_tens = num1_tens; num2_tens <= 9; num2_tens++)
{
for (num2_ones = (num1_tens == num2_tens) ? num1_ones + 1 : 0; num2_ones <= 9; num2_ones++)
{
putchar(num1_tens + '0');
putchar(num1_ones + '0');
putchar(' ');
putchar(num2_tens + '0');
putchar(num2_ones + '0');
if (!(num1_tens == 9 && num1_ones == 9 && num2_tens == 9 && num2_ones == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return 0;
}
