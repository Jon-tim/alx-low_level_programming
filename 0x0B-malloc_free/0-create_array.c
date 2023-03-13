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
		return ('\0');
	char *array = (char *)malloc(size * sizeof(c));

	if (array == '\0')
		return ('\0');
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
