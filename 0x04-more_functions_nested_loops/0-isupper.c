#include "main.h"

/**
 * _isupper - This function returns the value of 1 if the input is uppercase
 * and returns the value of 0 in any other case
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if c is uppercase and 0 for the rest
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
