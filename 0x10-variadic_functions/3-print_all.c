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
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
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
