#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: input
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		int len = 0;

		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
