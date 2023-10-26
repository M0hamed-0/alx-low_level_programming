#include "main.h"
/**
 * get_bit - bla bla
 * @n: bla bla
 * @index: bla bla
 * Return: bla bla
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);

}
