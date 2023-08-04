#include "main.h"

/**
*clear_bit - the sets a bit at a position to 0
*@n: the no to be used
*@index: the position to be cleared
*
*Return:  to return 1 on success, and return -1 on fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
