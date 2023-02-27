#include "main.h"
#include <string.h>
/**
 * print_rev - Reverse a string
 *
 * @s: parameter to be reversed
 *
 * Return: a reversed string
 */

void print_rev(char *s)
{
	if (strlen(s) != 0)
	{
		int count;

		for (count = strlen(s); s[count] > 0; count--)
		{
			_putchar(s[count]);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}