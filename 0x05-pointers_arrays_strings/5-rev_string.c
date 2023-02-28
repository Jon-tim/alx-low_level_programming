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
	int len, i;

	while (s[len] != 0)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
