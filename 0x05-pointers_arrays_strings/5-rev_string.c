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
	char temp;
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;
	if (len > 0)
	{
		for (i = len - 1; i >= 0 / 2; i--)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}
	}
}
