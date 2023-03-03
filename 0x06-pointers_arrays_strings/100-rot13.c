#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: character to be encoded
 * Return: encoded string
 *
 */
char *rot13(char *n)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alphabet[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
	}
	return (n);
}
