#include "hash_tables.h"

/**
 * hash_table_print - print a hash table.
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	bool drp;

	if (!ht)
		return;
	i = 0;
	drp = false;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (drp)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			drp = true;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
