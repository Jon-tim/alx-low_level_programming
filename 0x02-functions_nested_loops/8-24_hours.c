#include "main.h"
/**
 * jack_bauer - starting point
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a + 48);
			_putchar(':');
			_putchar(b + 48);
			_putchar('\n');
		}
	}
}
