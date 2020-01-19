#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: hash table
 * @key: unique
 * Return: char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *Temp;

	if (!ht || !key)
	{return (NULL); }
	i = key_index((const unsigned char *)key, ht->size);
	Temp = ht->array[i];
	for (; Temp; Temp = Temp->next)
	{
		if (strcmp(Temp->key, key) == 0)
		{return (Temp->value); }
	}
	return (NULL);
}
