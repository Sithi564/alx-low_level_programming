#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main()
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