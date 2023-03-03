#include "main.h"
/**
 * leet - encode a string into 1337
 * @str: parameter to be evaluated
 * Return: a leetified value
 */
char *leet(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 51;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 48;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 55;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 49;
		}
		else
		{
			str[i] = str[i];
		}
	}
	str[i] = '\0';
	
	return (str);
}
