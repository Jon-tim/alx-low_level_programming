#include "main.h"

/**
 * print_triangle - print triangle
 *@size: size of triangle
 *Return: # as triangle
 *
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b < size-1; b++)
			{
				_putchar(' ');
			}
			for (b--; b < size; b++)
			{
				-putchar(35);
			}
			if (a < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
