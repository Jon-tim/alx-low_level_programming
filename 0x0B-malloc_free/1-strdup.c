#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: string to be duplicate
 * Return: pointer to the newly allocated space in memory or NULL
 */
char *_strdup(char *str)
{
	unsigned int length = 0;
	unsigned int i;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newstr = malloc((length + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
