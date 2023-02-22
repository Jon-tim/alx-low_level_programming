#include "stdio.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: number to start from
 * Result: always 0
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d, ", n);
	}
}
