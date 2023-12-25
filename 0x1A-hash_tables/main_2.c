#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void _shash_table_print_array(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *p;
	char n;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		printf("[%lu]", i);
		n = 0;
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
			n = 1;
		}
		printf("\n");
	}
}

void _shash_table_print_sorted(const shash_table_t *ht)
{
	shash_node_t *p;
	char n;

	if (!ht)
		return;
	printf("{");
	n = 0;
	p = ht->shead;
	while (p)
	{
		if (n == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", p->key, p->value);
		n = 1;
		p = p->snext;
	}
	printf("}\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
/*
int main(void)
{
	shash_table_t *ht;
	int ret;

	ht = shash_table_create(1024);
	ret = shash_table_set(ht, "usa", "Washington");
	ret = shash_table_set(ht, "france", "Paris");
	ret = shash_table_set(ht, "auk", "London");
	ret = shash_table_set(ht, "spain", "Madrid");
	ret = shash_table_set(ht, "germany", "Berlin");
	ret = shash_table_set(ht, "china", "Beijing");
	ret = shash_table_set(ht, "russia", "Moscow");
	ret = shash_table_set(ht, "bahrain", "Manama");
	ret = shash_table_set(ht, "canada", "Ottawa");
	ret = shash_table_set(ht, "brazil", "Brasilia");
	ret = shash_table_set(ht, "sweden", "Stockholm");
	ret = shash_table_set(ht, "iceland", "Reykjavik");
	ret = shash_table_set(ht, "japan", "Tokyo");
	ret = shash_table_set(ht, "australia", "Canberra");
	printf("%d\n", ret);
	_shash_table_print_sorted(ht);
	return (EXIT_SUCCESS);
}*/

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;
        int ret;

        ht = shash_table_create(1024);
        ret = shash_table_set(ht, "usa", "Washington");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "france", "Paris");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "uk", "London");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "spain", "Madrid");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "germany", "Berlin");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "china", "Beijing");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "russia", "Moscow");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "bahrain", "Manama");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "canada", "Ottawa");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "brazil", "Brasilia");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "sweden", "Stockholm");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "iceland", "Reykjavik");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "japan", "Tokyo");
        printf("%d\n", ret);
        ret = shash_table_set(ht, "australia", "Canberra");
        printf("%d\n", ret);
        _shash_table_print_array(ht);
        _shash_table_print_sorted(ht);
        return (EXIT_SUCCESS);
}
