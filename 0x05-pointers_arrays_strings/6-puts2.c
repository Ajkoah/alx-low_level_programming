#include "main.h"

/**
 * puts2- print every other characterof a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
