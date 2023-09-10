#include "main.h"

/**
 * print_numbers - This is a function that prints numbers with _putchar
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
