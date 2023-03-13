#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of characters
 * @size: size of array to be created
 * @c: character which array is to be initialized with
 * Return: NULL is size is void; returns a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *arr = malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
