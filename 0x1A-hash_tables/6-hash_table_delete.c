#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: hash table
 * Return: none.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *Temp, *PresentND;
	unsigned long i = 0;

	if (!ht)
	{return; }
	for (i = 0; i < (ht->size); i++)
	{
		PresentND = ht->array[i];
		while (PresentND)
		{
			Temp = PresentND;
			PresentND = PresentND->next;
			free(Temp->key);
			free(Temp->value);
			free(Temp);
		}
	}
	free(ht->array);
	free(ht);
}
