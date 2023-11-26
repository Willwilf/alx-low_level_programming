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
		int longit = 0;

		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
