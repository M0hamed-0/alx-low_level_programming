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
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		separator = "";
		if (format[i + 1] != '\0')
			separator = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", (float)va_arg(args, double), separator);
				break;
			case 's':
				{
					str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
					printf("%s%s", separator, str);
				}
				}
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
