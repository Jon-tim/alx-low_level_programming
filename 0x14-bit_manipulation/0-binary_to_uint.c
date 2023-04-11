#include "main.h"
/**
 * binary_to_uint - convert binary to an unsigned int
 * @b: pointing to a sting of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int remainder, binary, base = 1, decimal = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}
	binary = my_atoi(b);
	while (binary > 0)
	{
		remainder = binary % 10;
		decimal = decimal + remainder * base;
		binary = binary / 10;
		base = base * 2;
	}
	return (decimal);
}

