#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int count, index;

	while (s[index] != '\0')
		index++;
	
	if (index > 0)
	{
		for (count = index - 1; count >= 0; count--)
			_putchar(s[count]);
	}
	else
		_putchar('\n');
}
