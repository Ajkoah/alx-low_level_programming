#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 * Description: print a random number and test whether is
 * is positive, zero, or negative.
 * Return: (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
