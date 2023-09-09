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
char characters[26];
char l = 'a';
int i = 0;
while (l <= 'z')
{
characters[i] = l;
i++;
l++;
}
{
int j;
for (j = i - 1; j >= 0; j--)
{
putchar(characters[j]);
}
putchar('\n');
return (0);
}
}
