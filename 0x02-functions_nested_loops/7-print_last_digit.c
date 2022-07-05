#include "main.h"

/**
 * print_last_digit - Check the code
 * @n: to be checked
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
	putchar(x + '0');
	return (x);
}
