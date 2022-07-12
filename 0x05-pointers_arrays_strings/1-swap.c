#include "main.h"

/**
 * swap_int- function thatswap the value of two integers
 * @a: function to be swapped
 * @b: function to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
