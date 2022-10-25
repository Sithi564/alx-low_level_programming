#include "main.h"

void _puts(char *str);

/**
 * _puts -  prints a string followed by a new line
 *
 * @str : string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
