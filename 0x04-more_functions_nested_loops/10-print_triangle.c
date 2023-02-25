#include "main.h"

/**
 * print_triangle - print triangle
 *@size: size of triangle
 *Return: # as triangle
 *
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a+1; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
