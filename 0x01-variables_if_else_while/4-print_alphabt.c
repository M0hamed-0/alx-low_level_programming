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
char l = 'a';
while (l <= 'z')
{
if (l != 'q' && l != 'e')
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
