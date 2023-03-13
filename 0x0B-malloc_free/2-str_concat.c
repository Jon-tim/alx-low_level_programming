#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: NULL on failure or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	
	s3 = malloc(((len1 + len2) + 1) * sizeof(char));

	if (s3 == NULL)
		free(s3);
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (i = 0; i < len2; i++)
		s3[len1 + i] = s2[i];

	s3[len1 + len2] = '\0';

	return (s3);
}
