#include "stdio.h"
/**
 * _puts_recursion - prints a string.
 *
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/* base case */
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);/* print the first character of the string */
		_puts_recursion(++s); /* Recursively print the next character */
	}
}
