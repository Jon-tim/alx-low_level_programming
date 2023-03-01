#include "main.h"
/**
 * _atoi - convert a string to an integer
 *@s: string to be evaluated
 *
 *Return: integer
 *
 */

int _atoi(char *s)
{
	int count = 0, hold;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= '0' || s[count] <= '9' || s[count] == '+' || s[count] == '-')
		{
			hold = s[count];
		}
	}
	return (hold);
}
