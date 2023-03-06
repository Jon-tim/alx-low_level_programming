#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: String to be evaluated
 * @c: character being sought
 * Return: a pointer to c if found, NULL if unfound
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	
	return ('\0');
}
