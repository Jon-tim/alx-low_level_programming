#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int count;

	for (count = strlen(s) - 1; count >= strlen(s); count--)
		_putchar(s[count]);
}
