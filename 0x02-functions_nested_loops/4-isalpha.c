#include "main.h"
/**
 * _isalpha - starting point
 * @c: The number to be checked
 * Return: always return 0
 */

int _isalpha(int c)
{
        if (c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

