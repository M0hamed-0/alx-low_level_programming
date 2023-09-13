#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program.
 * It prints "_putchar" to the standard output.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
_putchar(str[ch]);
_putchar('\n');
return (0);
}
