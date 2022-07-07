#include "main.h"
/**
 * print_most_numbers - print the most numbers from 0 - 9
 * except 2 and 4 followed by the new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
	}
	_putchar('\n');
}	
