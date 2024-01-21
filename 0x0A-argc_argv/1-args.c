#include <stdio.h>
#include "main.h"
/**
 * main - Prints out the number of arguments passed
 * @argc: number of arguments
 * @argv: arguments passed in the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

