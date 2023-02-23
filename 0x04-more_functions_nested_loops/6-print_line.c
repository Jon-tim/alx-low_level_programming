#include "main.h"

/**
 * print_line - draw a straight line
 *
 * @n: parameter to be evaluated
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 48)
		{
			break;
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
