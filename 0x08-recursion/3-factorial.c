#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: number to return the factorial from
 * Return: The factorial of n
 */
int factorial(int n)
{
/* n! = n * (n-1)!; */

/* define base case */
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
/* End of base case */
return (n * factorial(n - 1));
}
