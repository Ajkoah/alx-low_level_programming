#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{					
		s[a] = b;
	}
	return (s);
}
