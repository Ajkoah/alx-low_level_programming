#include "main.h"

/**
 * main- Check the code
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	putchar(last_digit + '0');
	return (last_digit);
}
