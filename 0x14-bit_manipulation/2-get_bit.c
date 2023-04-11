#include "main.h"
/**
 * get_bit - get bit in a given index
 * @index: given index
 * @n: decimal to extract binary from 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	unsigned long int bit = n >> index;
	bit &= 1;
	return bit;
}
