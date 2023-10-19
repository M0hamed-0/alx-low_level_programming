#ifndef LISTS_H
#define LISTS_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * struct list_s - is a single linked list
 * @str: bla bla
 * @len: bla bla
 * @next: bla bla
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif