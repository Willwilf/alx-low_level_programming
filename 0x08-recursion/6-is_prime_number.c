#include "main.h"
/**
 * is_prime_number - Returns 1 if prime number and 0 if not
 * @n: input
 * Return: Always 1 or 0
 */
int is_prime_number(int n)
{
/**
 * prime number - Returns as a helper functiom
 * @n: input
 * @divider: This is a constant variable
 * Return: Always 1 and 0
 * the number given should be divisible by 1 and itself
 * ther number, should should give a number greater than 0
*/
int prime_number(int divider, int n);

int divider = 2;

/* define base case */
if (n < 2)
{
return (0);
}
if (n % n == 0 || n % 1 == 0)
{
if (prime_number(divider, n) != 0)
{
return (1);
}
else
{
return (0);
}
}
}
/**
 * prime_number - Returns 0 and 1
 * @n: input
 * @divider: a constant variable
 * Return: Always 1 and 0
 */
int prime_number(int divider, int n)
{
if (divider < n)
{
if (n % divider == 0) /* means n is divisible by another number*/
{
return (0);
}
else
{
++divider;
return (prime_number(divider, n));
}
}
else
{
return (1);
}
}
