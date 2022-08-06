#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - print an entire hash table
*
* @ht: hash table to print
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *pointer;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
		for (pointer = ht->array[index]; pointer != NULL;
			pointer = pointer->next)
		{
			if (first)
			{
				printf("'%s': '%s'", pointer->key, pointer->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", pointer->key, pointer->value);
		}
	printf("}\n");
}
