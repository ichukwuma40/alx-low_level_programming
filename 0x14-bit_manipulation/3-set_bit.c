#include "main.h"

/**
*set_bit - This sets a bit at position to 1
*@n: The number to be used
*@index: the index to be set
*
*Return: 1 is retuned  on success, while -1 is returned on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
