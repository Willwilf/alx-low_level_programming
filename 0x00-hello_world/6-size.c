#include <stdio.h>
/**
 * main - The function prints the size of various types
 * Return: returns the value of 0
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longintType;
	long long longlongType;

	/**
	 *sizeof evaluates the size of the variable
	 */

	printf("size of int: %zu bytes \n", sizeof(intType));
	printf("size of float: %zu bytes \n", sizeof(floatType));
	printf("size of char: %zu bytes \n", sizeof(charType));
	printf("size of long int: %zu bytes \n", sizeof(longintType));
	printf("size of long long: %zu bytes \n", sizeof(longlongType));

	return (0);
}

