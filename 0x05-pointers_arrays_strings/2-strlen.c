#include "main.h"

/**
 * _strlen - Evaluates the length of a string
 *
 * @s: string/parameter to be evaluated
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length_of_str;

	while (s[length_of_str] != 0)
		length_of_str++;
	
	return (length_of_str);
}
