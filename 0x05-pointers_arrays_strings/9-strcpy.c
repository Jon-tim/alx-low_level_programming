#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointing to where strings should be copied
 * @src: where to copy string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; *(src + index) != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}
