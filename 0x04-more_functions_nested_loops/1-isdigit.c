#include "main.h"

/**
 * _isdigit - is a function that checks for the digit from 0 - 9 and returns a
 * value of 1 and returns a  value of 0 for the rest
 *
 * @c: the character in ASCII code 
 *
 * Return: 1 for the digits from 0 - 9 and returns 0 for the rest.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <=9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
