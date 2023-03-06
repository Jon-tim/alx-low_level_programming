#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: set of strings to be checked
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	int accept_length = 0;
	int s_length = 0;

	while (accept[accept_length] != '\0')
		accept_length++;
	while (s[s_length] != '\0')
		s_length++;

	for (i = 0; i < s_length; i++)
	{
		for (j = 0; j < accept_length; j++)
		{
			if (s[s_length] == accept[accept_length])
				return (&s[s_length]);
		}
	}
	return ('\0');
}
