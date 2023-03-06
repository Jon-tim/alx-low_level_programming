#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be checked
 * @accept: chacters to be checked
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;
	int accept_len = 0;

	while (accept[accept_len] != '\0')
	{
		accept_len++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (j == accept_len)
		{
			return (length);
		}
	}
	return (length);
}
