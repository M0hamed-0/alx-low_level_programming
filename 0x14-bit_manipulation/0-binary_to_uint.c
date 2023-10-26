#include "main.h"
/**
 * binary_to_uint - bla bla
 * @b: bnla bla
 * Return: ui
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0, len = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}


	while (b[len] != '\0')
	{
		len++;
	}

	while (counter < len)
	{
		if (b[counter] != '0' && b[counter] != '1')
		{
			return (0);
		}
		if (b[counter] == '1')
		{
			num += 1 << (len - (counter + 1));
		}
		counter++;
	}
	return (num);
}
