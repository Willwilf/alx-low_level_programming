#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *  main - Prints if number is either positive or negative
 *  return: Always (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("n is: %d", n);
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

