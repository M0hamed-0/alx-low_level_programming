#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - bla bla bla
 * @argc: bla bla bla
 * @argv: bla bla bla
 *
 * Return: bla
 */
int main(int argc, char **argv)
{
int sum;
if (argc > 3)
{
printf("Error\n");
}
else
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
return (0);
}
