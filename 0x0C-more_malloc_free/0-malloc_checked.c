#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter to be evaluated
 * Return: 98 if malloc fails or pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr  malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
