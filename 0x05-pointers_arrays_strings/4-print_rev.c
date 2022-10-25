#include <stdio.h>
/**
 * @brief Prints a string in reverse
 * 
 * @param s: string to be printed
 * @return: always return 0
 */

void print_rev(char *s)

{	/*find the length of the string to be printed*/

	int length;
	int i;

	while (*s != '\0')
	{
		length++;
	}
	/*Go back one character before '\0'*/

	length--;

	/* print string reversed */
	for (i = length; i > 0; i--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
