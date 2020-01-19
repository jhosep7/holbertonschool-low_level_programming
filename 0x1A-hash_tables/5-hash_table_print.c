#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: none.
 */
void hash_table_print(const hash_table_t *ht)
{
size_t j = 0;
unsigned long int i;
hash_node_t *Temp;

if (!ht)
{return; }
printf("{");
for (i = 0; i < ht->size; i++)
{
Temp = ht->array[i];
for (; Temp; j++, Temp = Temp->next)
{
if (j)
{printf(", "); }
j = 1;
printf("'%s':'%s'", Temp->key, Temp->value);
}
}
printf("}\n");
}
