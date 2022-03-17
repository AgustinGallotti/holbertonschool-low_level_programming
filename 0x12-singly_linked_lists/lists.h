#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t print_list(const list_t *h);
int _putchar(char c);

/**
* struct node - struct of the nodes
* @str: data
* @len: lenght
* @next: to the next node
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

#endif
