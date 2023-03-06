#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of copies to be made
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
