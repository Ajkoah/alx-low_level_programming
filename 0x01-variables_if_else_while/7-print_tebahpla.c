#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 * Description: alphabets in reverse
 * Return: 0 success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
