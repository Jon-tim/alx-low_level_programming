#include "main.h"
/**
 * _strstr - a function thatlocates a substring
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located string of null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int hay_len = 0;
	int needle_len = 0;

	while (needle[needle_len] != '\0')
		needle_len++;
	while (haystack[hay_len] != '\0')
		hay_len++;
	for (i = 0; i <= hay_len - needle_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
