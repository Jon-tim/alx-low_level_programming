#include "main.h"
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
		int count, len = 0;

		while (s[len] != 0)
			len++;

		for (count = len - 1; count >= 0; count--)
		{
			_putchar(s[count]);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
