#include "main.h"
/**
 * _islower - starting point
 * @c: The number to be checked
 * Return: always return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
