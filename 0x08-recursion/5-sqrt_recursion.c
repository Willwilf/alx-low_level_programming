#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of
 * a number
 * sqrt_fun - This is a helper function
 * @n: input
 * Return: The square root of a number.
 */
int _sqrt_recursion(int n)
{
int sqrt_fun(int n, int sq);

int sq = 1;

return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - Returns as a helper function
 * @n: input
 * @sq: this is the square root
 * Return: The square root of the given number.
 * compare the given number to the square of various numbers recursively
 */
int sqrt_fun(int n, int sq)
{
if (n == sq * sq)
{
/* Define base case */
return (sq);
}
else if (sq < n)
{
return (sqrt_fun(n, ++sq));
}
else
{
return (-1);
}
}
