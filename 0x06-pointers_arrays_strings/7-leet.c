#include "main.h"
/**
 * leet - encode a string into 1337
 * @str: parameter to be evaluated
 * Return: a leetified value
 */
char *leet(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0', j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'e' || str[i] == 'E')
			{
				str[j] = 51;
			}
			else if (str[i] == 'a' || str[i] == 'A')
			{
				str[j] = 52;
			}
			else if (str[i] == 'o' || str[i] == 'O')
			{
				str[j] = 48;
			}
			else if (str[i] == 't' || str[i] == 'T')
			{
				str[j] = 55;
			}
			else if (str[i] == 'l' || str[i] == 'L')
			{
				str[j] = 49;
			}
			else
			{
				str[i] = str[j];
			}
		}
	}
	return (str);
}
