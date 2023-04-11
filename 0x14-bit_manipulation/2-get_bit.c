#include "main.h"
/**
 * get_bit - get bit in a given index
 * @index: given index
 * @n: decimal to extract binary from
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = n >> index;
	bit &= 1;
	return (bit);
}
