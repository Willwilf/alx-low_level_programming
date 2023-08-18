#include <stdio.h>
/**
 * main - The function prints the size of various types
 * Return: returns the value of 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	/**
	 *sizeof evaluates the size of the variable
	 */

	printf("size of char: %zu bytes \n", sizeof(a));
	printf("size of int: %zu bytes \n", sizeof(b));
	printf("size of long int: %zu bytes \n", sizeof(c));
	printf("size of long long: %zu bytes \n", sizeof(d));
	printf("size of float: %zu bytes \n", sizeof(e));

	return (0);
}

