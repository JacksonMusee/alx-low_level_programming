#include "hash_tables.h"

/**
 *key_index - Find the index of a given key
 *
 *@key: The key
 *@size: Size of the hash table
 *
 * Return: Index where the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
