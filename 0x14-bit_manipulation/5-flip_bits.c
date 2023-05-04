#include "bit.h"
/**
 * flip_bits - returns the number of bits you would
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bit;

	for (num_of_bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_of_bit++;
	}

	return (num_of_bit);
}

