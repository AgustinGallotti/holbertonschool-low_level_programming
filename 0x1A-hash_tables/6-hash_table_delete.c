#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
*
* @ht: has table
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *pointer, *next;
	unsigned int index;

	if (*ht == 0 || ht == NULL)
		return; /*program checks*/
	for (index = 0; index < ht->size; index++)
		for (pointer = ht->array[index]; pointer != NULL; pointer = next)
		{
			next = pointer->next;
			free(pointer->key);
			free(pointer->value);
			free(pointer);
		}
	free(ht->array);
	free(ht);
}
