#include "main.h"

/**
 * _islower - Check the code
 * @c: the character to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
