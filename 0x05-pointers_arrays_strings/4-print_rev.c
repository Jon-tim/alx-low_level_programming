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
	int i = 0, count;

	while (s[i] != '\0')
		i++;

	for (count = i - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
