#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - function that retrieves a value associated with key
*
* @ht: hash tables
* @key: key value
*
* Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer;
	unsigned long int index = 0;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (0); /*program checks*/

	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	pointer = ht->array[index];

	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
			return (pointer->value); /*corner case*/

		pointer = pointer->next;
	}

	return (0);
}
