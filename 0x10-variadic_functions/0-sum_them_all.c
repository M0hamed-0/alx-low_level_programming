#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - bla bla
 *
 * @n: bla
 *
 *
 * Return: bla
 */
int sum_them_all(const unsigned int n, ...)
{

	int i;
	int sum = 0;
	int x;

	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x =	va_arg(args, int);
		sum += x;
	}

	return (sum);
}
