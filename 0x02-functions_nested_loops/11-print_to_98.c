#include "stdio.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: number to start from
 * Result: always 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (;n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (;n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d", n);
	}
}
