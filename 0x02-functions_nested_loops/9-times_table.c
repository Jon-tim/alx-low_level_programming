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
			_putchar(multi / 10 + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('36');
	}

}
