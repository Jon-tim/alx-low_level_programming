#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
