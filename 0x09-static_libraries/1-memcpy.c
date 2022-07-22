#include "main.h"

/** 
 * _memcpy- function that copies memory are
 * @dest: memory are to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
