#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: none.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *Temp;

	if (!ht)
	{return; }
	printf("{");
	for (i = j; i < ht->size; i++)
	{
		Temp = ht->array[i];
		for (j = 0; Temp; Temp = Temp->next)
		{
			if (j)
			{printf(","); }
			printf("'%s':'%s'", Temp->key, Temp->value);
			j++;
		}
	}
	printf("}\n");
}
