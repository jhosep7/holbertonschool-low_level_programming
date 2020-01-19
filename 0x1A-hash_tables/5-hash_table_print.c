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
if (ht->array[i])
{
Temp = ht->array[i];
for (; Temp; Temp = Temp->next)
{
printf("%s'%s':'%s'", j == 0 ? "" : ", ", Temp->key, Temp->value)
}
}
}
printf("}\n");
}
