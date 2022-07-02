#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 * Description: print single digits wihout using char
 * Return: 0 success
 */
int main(void)
{
	int num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
