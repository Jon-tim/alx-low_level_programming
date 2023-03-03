#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: 15, -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1 != '\0' && s2 != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			_putchar("-15");
		}
		else if (s1[i] > s2[i])
		{
			_putchar("15");
		}
		else
			_putchar("0");
	}
}
