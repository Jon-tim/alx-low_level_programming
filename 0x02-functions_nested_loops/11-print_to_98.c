#include "main.h"
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
			_putchar(n / 10 + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(n / 10 + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n / 10 + 48);
	}
	_putchar('\n');
}
