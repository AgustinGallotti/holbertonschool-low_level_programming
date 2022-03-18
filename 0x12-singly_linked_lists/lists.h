#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* struct node - struct of the nodes
* @str: data
* @len: lenght
* @next: to the next node
*/
typedef struct node
{
char *str;
unsigned int len;
struct node *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
#endif
