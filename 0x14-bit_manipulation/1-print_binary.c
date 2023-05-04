#include "bit.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		/* code */

		if (n > 1)
		{
			/* code */
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

