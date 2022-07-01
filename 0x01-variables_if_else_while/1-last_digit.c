#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Print the last digt of number stored
 * in variable n.
 *Return (0)
 */

int main(void)
{
	int n;
        char last[] = "Last digit of";
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes here*/
	printf("%s %dis %d is ", last, n, n % 10);
	if (n % 10 > 5)
	{
	printf("greater than 5\n")
	}
	else if (n % 10 == 0)
	{
	printf("0\n")
	}
	else
	{
	printf("less than 6 and not 0\n")
	}       	
	return (0);

}
