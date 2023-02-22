#include "main.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: number to start from
 * Result: always 0
 */

void print_to_98(int n)
{
	if (n > 99)
	{
		while (n > 97)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar('\n');
	}
	else if (n < 99)
	{
		while (n < 98)
		{
			if (n != 98)
			{
				_putchar(n);
				n++;
			}
			else
			{
				_putchar(n);
				break;
			}
			_putchar('\n');
		}
	}
}
