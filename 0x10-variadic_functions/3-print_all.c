#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - bla bla
 *
 * @format: bla
 *
 * Return: bla
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *p;
	char *sp;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		sp = "";
		if (format[i + 1] != '\0')
			sp = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sp);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sp);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sp);
			break;
		case 's':
			p = va_arg(list, char*);
			if (!p)
				p = "(nil)";
			printf("%s%s", p, sp);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
