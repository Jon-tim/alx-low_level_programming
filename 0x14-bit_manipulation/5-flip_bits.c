#include "main.h"
/**
 * flip_bits - the number of bits to flip to get to a digit
 * @n: n
 * @m: m
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbit;

	for (numbit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbit++;
	}

	return (numbit);
}
