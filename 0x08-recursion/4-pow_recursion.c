#include "main.h"
/**
 * _pow_recursion - Returns the value of a number raised to the
 * power of another numbee
 * @x: input number
 * @y: input the power of the number
 * Return: The value of the number raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
