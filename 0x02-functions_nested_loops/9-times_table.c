#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: always return 0
 */
void times_table(void)
{
	int a, b, multi;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			multi = a * b;
			if (multi <= 9 && multi != 0)
			{
				_putchar(' ');
				_putchar(multi / 10 + 48);
			}
			else if (multi == 0)
			{
				_putchar(multi % 10 + 48);
			}
			else
			{
				_putchar(multi / 10 + 48);
				_putchar(multi % 10 + 48);
				_putchar(',');
			}
			_putchar(' ');

		}
		_putchar('\n');
	}

}
