#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array
 * @nmemb: array
 * @size: size of bytes
 * Return: Null or pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr_ptr = malloc(nmemb * size);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr_ptr[i] = 0;
	}
	return (arr_ptr);
}
