#include "hash_tables.h"

/**
 * key_index - Thi get the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: Use the key to get the index of.
 * @size: This is the size of the array of the hash table.
 *
 * Return: To return the index of the key.
 * Description: This uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}