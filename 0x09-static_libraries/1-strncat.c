#include "main.h"

/**
 * _strncat-  function that concatenates two strings
 * except that it will use at most n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: number of bytes
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
