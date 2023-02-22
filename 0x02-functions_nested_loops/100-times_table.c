#include "main.h"
/**
 * print_times_table - print n times table
 * @n: number to be checked
 * Return: always return 0
 */
void print_times_table(int n)
{
	int a, b, multi;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				multi = a * b;
				_putchar(44);
				_putchar(32);
				if (multi <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(multi + 48);
				}
				else if (multi <= 99)
				{
					_putchar(32);
					_putchar(multi / 10 + 48);
					_putchar(multi % 10 + 48);
				}
				else
				{
					_putchar(((multi / 100) % 10) + 48);
					_putchar(((multi / 10) % 10) + 48);
					_putchar((multi % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
