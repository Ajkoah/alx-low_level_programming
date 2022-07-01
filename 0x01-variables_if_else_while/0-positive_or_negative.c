#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main block
 * Description: print a random number and test whether is
 * is positive, zero, or negative.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n >0)
			printf("%d is positive\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		else 
			printf("%dis zero\n", n);

		return (0);
}
